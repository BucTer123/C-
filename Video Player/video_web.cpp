#include <webview.h>

void video() {
    webview::webview w1(true, nullptr);

    w1.set_title("UI");
    w1.set_size(640, 480);
    
    w1.set_html(R"(
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
            font-weight: bolder;
            font-style: initial;
            padding: 0;
            margin: 0;
        }
    </style>
    <body>
        <input id="fl" type="file" />
        <br><br>

        <video id="vd" accept="audio/*" ></video>
    </body>
    <script>
        const inp1 = document.getElementById("fl");
        const vid = document.getElementById("vd");

        const file = this.files[0];

        inp1.addEventListener("change", function () {
            if (file) {
                const url = URL.createObjectURL(file);
                vid.src = url;
                vid.play();
            }
        });
    </script>
    </html>
    )");

    w1.run()
    return 0;
}