// ==UserScript==
// @name         Delete-8chan-Ads
// @namespace    http://tampermonkey.net/
// @version      0.1
// @description  Deletes the stupid annoying pornographic advertisements on 8chan!
// @author       Andruw Earnhardt
// @match        https://8ch.net/*
// @run-at       document-body
// https://github.com/Druw2000/src/tree/master/scripts/delete-ads
// ==/UserScript==

(function() {
    'use strict';
    if (window.location.href == "https://8ch.net/index.html")
        {
        if (document.getElementsByClassName("description box col col-12").item(2).getElementsByTagName("p").item(0).innerHTML === "Sponsored by")
        {
            document.getElementsByClassName("description box col col-12").item(2).remove();
        }
    }
    else
    {
        document.getElementById("8ch-top-ads").remove();
    }
})();
