#include <curl/curl.h>
#include <iostream>
#include <string>
#include "req.h"

void function_requests() {
    std::cout << "> ";
    std::string resp;

    if (!curl) {
        std::cout << "\033[31m ERROR!: \033[0m";
    } else {
        CURL* curl = curl_easy_init();

        curl_easy_setopt(curl, CURLOPT_URL, resp);
        curl_easy_setopt(curl, CURLOPT_TIMEOUT, 5L);
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
        curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &resp);
    }
}
