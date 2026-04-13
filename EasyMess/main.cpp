#include <webview.h>
#include "main.h"

void maintwo() {
    webview::webview w(true, nullptr);

    w.set_title("GUI");
    w.set_size(800, 600, WEBVIEW_HINT_NONE);

    w.set_html(R"(

    )")
    w.run();
    return 0;
}