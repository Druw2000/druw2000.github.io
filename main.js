var c = document.getElementById("content");
var head = document.getElementById("header");
var body = document.getElementById("body");
var nav = document.getElementById("nav");
var code = document.getElementById("code");

var black_google = false;
function invert() {
  if (black_google) {
    document.style.background = "linear-gradient(#efefef, #2d2d2d)"
    c.style.backgroundColor = "#efefef"
    c.style.color = "#2d2d2d"
    black_google = false;
  }
  else {
    document.style.background = "linear-gradient(#2d2d2d, #efefef)"
    c.style.backgroundColor = "#2d2d2d"
    c.style.color = "#efefef"
    black_google = true;
  }
}
