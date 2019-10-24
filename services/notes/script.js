function createItem() {
	alert("created item");
}

function removeItem() {
	alert("deleted item");
}

function pinItem() {
	alert("pinned item");
}

var pinButtons = document.getElementsByClassName("pin");
var createButtson= document.getElementsByClassName("create");
var removeButtons = document.getElementsByClassName("remove");

for (var i = 0; i < pinButtons.length; i++) {
	pinButtons[i].addEventListener('click', pinItem, false);
}

for (var i = 0; i < removeButtons.length; i++) {
	removeButtons[i].addEventListener('click', removeItem, false);
}

for (var i = 0; i < createButtons.length; i++) {
	createButtons[i].addEventListener('click', createItem, false);
}
