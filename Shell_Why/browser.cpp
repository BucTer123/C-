#include "webview.h"

void browser() {
    webview::webview w(true, nullptr);

    w.set_Title("Browser");
    w.set_size(800, 600, WEBVIEW_HINT_DONE);

    w.set_html(R"(
     <!DOCTYPE html>
     <html lang="en">
     <head>
        <meta charset="UTF-8">
        <title>Browser</title>
     </head>
     <style>
        body {
            background: ghostwhite;
            color: black;
            font-family: sans-serif;
            font-size: medium;
            font-style: initial;
            font-weight: bolder;
            padding: 0;
            margin: 0;
            max-width: 1920px;
            width: 100%;
            max-height: 1080px;
            height: 100%;
        }
        
        .container {
            background: whitesmoke;
            color: black;
            padding: 192px;
            margin: 108px;
            border: 1px solid gray;
        }
        
        .container:focus {
            border: 1px solid dimgray;
        }

        button {
            background: black;
            color: white;
            padding: 12px; 
            margin: 6px;
            border: 1px solid gray;
            opacity: 1;
        }

        button:focus {
            background: white;
            color: black;
            border: 1px solid blue;
        }

        button:active {
            opacity: 0.3;
            transform: translateX(5px);
        }

        button:hover {
            opacity: 0.5;
            transform: translateY(4px);
        }

        input {
            background: white;
            color: black;
            border: 1px solid dimgrey;
            padding: 18px;
            margin: 9px;
        }

        input:focus {
            background: black;
            color: white;
            border: 1px solid blue;
        }
     </style>
     <body>
        <div class="container">
            <input id="input" type="text" placeholder"Search..." />
            <button id="btn" type="button">OK</button>
        </div>
     </body>
     <script>
        const inp = document.getElementById("input");
        cons btn = document.getElementById("btn");

        btn.addEventListener("click", function () {
            const srch = inp.value;

            if (srch === "") {
                window.alert("ERROR!: Write domain!");
            } else {
                window.open(srch, "_blank"); 
            }
        })
     </script>
     </html>   
    )");

    w.run();
}