var app_id = "730";
var profile_id = "76561198880018964";
var context_id = "2";
var item_count = "255";

var url_format = [ "http://steamcommunity.com/profiles/", "/inventory/json/", "/", "?l=english&count=" ];
var url = url_format[0] + profile_id + url_format[1] + app_id + url_format[2] + context_id + url_format[3] + item_count;

console.log(url);

var items = [];
var one = true;

$.getJSON( "sample.json", function( data ) {
	var str = JSON.stringify(data, null, 2); // spacing level = 2	
	$("body").append("<pre>" + str + "</pre>)");
	console.log("first object");
	items.push("<tr>");
	traverse(data, process);
	$( "<table/>", {
		"class": "json",
		html: items.join( "" )
	}).appendTo( "body" );
});

function process(key,value) {	
	console.log(key + " : " + value);
	items.push( "<td id='" + key + "'>" + key + " : " + value + "</td>" );
}

function traverse(o, func) {
	for (var i in o) {
		func.apply(this,[i,o[i]]);  
		if (o[i] !== null && typeof(o[i])=="object") {
			console.log("thar be objects here");
			items.push("</tr>");
			items.push("<tr>");
			traverse(o[i], func);
		}
	}
}
