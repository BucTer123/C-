#include <curl/curl.h>
#include <iostream>
#include <string>

using namespace std;

void gui_dd() {
    CURL* curl = curl_easy_init();

    curl_easy_setopt(curl, CURLOPT_WRITEDATA, "write");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, stdout);
    curl_easy_setopt(curl, CURLOPT_URL, "https://google.com");

    curl_easy_perform(curl);
    cout << "\033[31m" << curl << "\033[0m" << endl;
    curl_easy_cleanup(curl);
}