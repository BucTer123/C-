from flask import Flask, render_template
import os
import time

def installer():
    print("Welcome!\n")
    time.sleep(3)
    print("Installing.....\n")
    time.sleep(3)
    print("Creating dirs and files from site .....\n")
    os.mkdir("templates")

    file = open("templates/index.html", "w")
    file.write("\n<!DOCTYPE html>")
    file.write("\n<head>")
    file.write("\n  <meta charset='utf-8'")
    file.write("\n  <title>Test Site </title>")
    file.write("\n  <link rel='stylesheet' href='style.css'")
    file.write("\n</head>")
    file.write("\n<body>")
    file.write("\n  <p>Welcome to test site!</p>")
    file.write("\n</body")
    file.write("\n<script src='script.js'></script>")

    file2 = open("templates/style.css", "w")
    file2.write("* {")
    file2.write("   background: whitesmoke;")
    file2.write("   color: black;")
    file2.write("}")

    file3 = open("templates/script.js", "w")
    file3.write("console.log('Hello World!'")

def server():
    app = Flask(__name__)

    @app.route("/")
    def start_site():
        return render_template("index.html")
    
def main():
    print("Opening index.html....\n")
    print("Open site on localhost 8000\n")
    app.run(debug=True)
