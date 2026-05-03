#include <iostream>
#include <string>
#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include "pp.h"

using json = nlohmann::json;

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* s) {
    size_t totalSize = size * nmemb;
    s->append((char*)contents, totalSize);
    return totalSize;
}

std::string send_request(const std::string& user_input) {
    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.deepseek.com/v1/chat/completions");

        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Authorization: Bearer API_KEY");
        headers = curl_slist_append(headers, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
		curl_easy_setopt(curl, CURLOPT_POST, 1L);
		curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
		curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5L);
		curl_easy_setopt(curl, CURLOPT_USERAGENT, "curl/7.68.0");

        json data = {
            {"model", "deepseek-chat"},
            {"messages", {
                {{"role", "user"}, {"content", user_input}}
            }}
        };

        std::string json_str = data.dump();

        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json_str.c_str());

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        curl_easy_perform(curl);
		CURLcode res = curl_easy_perform(curl);

		if (res != CURLE_OK) {
			std::cout << "CURL ERROR: " << curl_easy_strerror(res) << std::endl;
		}
		
        curl_easy_cleanup(curl);
    }

    return response;
}

void start_ai() {
    std::string input;

    while (true) {
        std::cout << "\nЯ: ";
        std::getline(std::cin, input);

        if (input == "exit") break;

        std::string response = send_request(input);
		
		std::cout << "RAW\n" << response << std::endl;

        try {
            json j = json::parse(response);
            std::string answer = j["choices"][0]["message"]["content"];

            std::cout << "Она: " << answer << std::endl;
        } catch (...) {
            std::cout << "Ошибка JSON!\n";
        }
    }

    return 0;
}