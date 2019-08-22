var start = document.createElement("button");
start.setAttribute("style", "z-index: 200;bottom:200px;");
start.onclick = run();
function run() {
    var elem = document.getElementsByClassName("player-name");
    var len = elem.length;
    var string = "";
    for (var i = 0; i < len; i++) {
        string += elem[i].innerHTML + "\n";
    }
    var button = document.createElement("button");
    button.setAttribute("style", "z-index: 200;bottom:200px;");
    button.onclick = function(){
        var link = document.createElement("a");link.setAttribute("href", "data:text/plain;charset=utf-8," + encodeURIComponent(string));
        link.setAttribute("download", "usernames.txt");
        link.style.display = 'none';
        document.body.appendChild(link);
        link.click();
        document.body.removeChild(link);
    };
    button.innerHTML = "Download";
    var c = document.getElementsByClassName("center lobby-contain ng-scope");
    c[0].appendChild(button);
}
