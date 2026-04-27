#include <webview.h>
#include "main.h"

void maintwo() {
    webview::webview w(true, nullptr);

    w.set_title("GUI");
    w.set_size(800, 600, WEBVIEW_HINT_NONE);

    w.set_html(R"(
    <!DOCTYPE html>
    <html lang="en">
    <head>
      <meta charset="UTF-8" >
      <title>UI</title>
    </head>
    <style>
        body {
          background: white;
          color: black;
          font-family: sans-serif;
          font-style: initial;
          font-weight: bolder;
          font-size: medium;
          padding: 0;
          margin: 0;
        }
    </style>
    <body>
      
    </body>
    <script>
       
    </script>
    </html>
    )")
    w.run();
    return 0;
}