// ==UserScript==
// @name         Delete-Main-Ads
// @namespace    http://tampermonkey.net/
// @version      0.1
// @description  Deletes the stupid annoying pornographic advertisement on 8chan's home page!
// @author       Andruw Earnhardt
// @match        https://8ch.net/index.html
// @run-at       document-body
// ==/UserScript==

(function() {
    'use strict';
        /*
        var list = document.getElementsByClassName("description box col col-12");
        for (var i = 0; i < list.length; i ++) {
            var target = list.item(i);
            var candidates = target.getElementsByTagName("p");
            if (candidates.item(0).innerHTML !== null) {
                if (candidates.item(0).innerHTML === "Sponsored by") {
                    target.remove();
                }
            }
        }
        */
    if (document.getElementsByClassName("description box col col-12").item(2).getElementsByTagName("p").item(0).innerHTML === "Sponsored by")
    {
        document.getElementsByClassName("description box col col-12").item(2).remove();
    }
})();