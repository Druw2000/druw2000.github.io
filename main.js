var black_google = false;
function invert() {
  if (!black_google) {
    document.getElementById("stylesheet").href="dark.css";
    black_google = true;
  }
  else {
    document.getElementById("stylesheet").href="light.css";
    black_google = false;
  }
}
