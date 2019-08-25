function changeTableBackground() {
  var document = DocumentApp.openByUrl("https://docs.google.com/document/d/1tMgCssRd3sNJTcAIXFLvhP62VhOfCiK_XstIZpitNCc/edit")
  var cells = [ ['Result', ''] ];
  var result = document.getBody().appendTable(cells);
  var tables = document.getBody().getTables();
  for (var i = 0; i < tables.length; i++) {
    
    //tables[i].setAttributes("")
  }
  result.getCell(0, 1).setText(i + "");
}
changeTableBackground();
