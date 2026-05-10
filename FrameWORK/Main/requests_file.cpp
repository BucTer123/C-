#include <curl/curl.h>
#include <iostream>
#include "requests_file.h"

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* s) {
    size_t totalSize = size * nmemb;
    s->append((char*)contents, totalSize);
    return totalSize;
}

void requests_function() {
	if (!curl) {
		return 0;
	} else {
		CURL *req = curl_easy_init();
		
		curl_easy_setopt(req, CURLOPT_WRITEFUNCITON, WriteCallback);
		curl_easy_setopt(req, CURLOPT_URL, "https://google.com/");
		curl_easy_setopt(req, CURLOPT_POST, 1L);
		curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
		curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5L);
		curl_easy_setopt(curl, CURLOPT_USERAGENT, "curl/7.68.0");
		
		curl_easy_perform(req);
		std::cout << req << std::endl;
		curl_easy_cleanup(req);
	}
}