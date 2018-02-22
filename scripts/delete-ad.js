var test = delete_ad();
while (test != 1) {
    var test = delete_ad();
}
function delete_ad() {
  var target = document.getElementByClassName("description box col col-12");
  var candidate = target.getElementByTagName("p");
  if (candidate.innerHTML == "Sponsored by") {
    target.parentNode.removeChild(target);
    return 1;
  }
  else {
    return 0;
  }
}
