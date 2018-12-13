function engine() {
  player.y -= 9.81;
  if (player.y <= 0) {
    return false;
  }
  x.innerHTML = player.x;
  y.innerHTML = player.y;
  a.innerHTML = player.a;
  return true;
}
var state = true;
var c = document.getElementById("canvas");
var width = c.getAttribute("width");
var height = c.getAttribute("height");
ctx = c.getContext("2d");
var x = document.getElementById("x");
var y = document.getElementById("y");
var a = document.getElementById("a");
ctx.fillStyle = "#000000";
ctx.fillRect(0, 0, width, height);
var player = {x:width/2, y:height, a:0};
while (state) {
  if (!engine()) {
    state = false;
  }
}
