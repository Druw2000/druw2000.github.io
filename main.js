var black_google = false;
function invert() {
  if (!black_google) {
  var c = document.getElementById("content");
  document.body.style.background = "linear-gradient(#2d2d2d, #f5f5f5)";
  c.style.color = "#f5f5f5";
  c.style.backgroundColor = "#2d2d2d";
  c.style.border = "1px solid #f5f5f5";
  black_google = true;
  }
  else {
    
  }
}
