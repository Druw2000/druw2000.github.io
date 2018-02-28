// ==UserScript==
// @name         Delete-Board-Ads
// @namespace    http://tampermonkey.net/
// @version      0.1
// @description  Deletes ads on 8chan boards
// @author       Andruw Earnhardt
// @include      https://8ch.net/*/*
// @exlcude      https://8ch.net/index.html
// @run-at       document-body
// ==/UserScript==

(function() {
    'use strict';
    document.getElementById("8ch-top-ads").remove();
})();