#include <webview.h>
#include "audio_web.h"

void audio() {
    webview::webview w(true, nullptr);

    w.set_title("UI");
    w.set_size(640, 480, WEBVIEW_HINT_NONE);

    w.set_html(R"(
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8" >
        <title>UI</title>
    </head>
    <style>
        body {
            background: whitesmoke;
            color: black;
            font-family: sans-serif;
            font-size: medium;
            font-style: initial;
            font-weight: bolder;
            padding: 0;
            margin: 0;
        }
    </style>
    <body>
        <input id="file" type="file" />
        <br><br>

        <audio id="pp" accept="video/*"></audio>
    </body>
    <script>
        const inp = document.getElementById("file");
        const aud = document.getElementById("pp");

        const file = this.files[0];
        
        inp.addEventListener("change", function () {
            if (file) {
                const url = URL.createObjectURL(file);
                aud.src = url;
                aud.play(url);
            }
        });
    </script>
    </html>    
    )")

    w.run()
    return 0;
}
