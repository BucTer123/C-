const usr = document.getElementById("username");
const psw = document.getElementById("password");
const nxt = document.getElementById("log");

nxt.addEventListener("click", function () {
    if (!usr.value === "" || !psw.value === "") {
        window.alert("ERROR!: Write username and password");
    } else {
        window.alert("OPENING !");
        window.open("index.html");
    }
})