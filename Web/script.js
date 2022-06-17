// Je vais chercher mes éléments et je le mets dans mes variables.
var Plateau_map = document.getElementById("Plateau_map")
var Nombre_carre
const input = document.getElementById("input")

function LireEcrireFichier() {
  // Je prend le positionnement 0 de mon dossiers qui équivaux a ma taille.
  var monDossier = this.files[0]
  var lecture = new FileReader()

  // Je charge les donner que j'ai dans le txt avec le nombre de colonneonne défini dans la première position.
  lecture.addEventListener("load", function (event) {
    var emplacementDossier = event.target.result.split(/\r\n|\n/)
    var Nombre_carre = parseInt(emplacementDossier[0])
    var echiquier = ""
  
  // Je crée des écartement de 50 sur les bords pour un effets 3D.
    echiquier += "<table id='table' border=50>"
    // Première ligne de colonneonne avec mes numéros
    // Je crée mes colonneonne en ligne et je leur applique un numéro dans la boucle.
    echiquier += "<tr>"
    echiquier += "<td></td>"
    for (var colonne = 1; colonne <= Nombre_carre; colonne++) {
      echiquier += "<td>" + colonne + "</td>"
    }

    // Je prend chaque ligne des lignes de char dans le fichier txt avant et après la première
    // Et je les applique dans le tableau avec mes nom d'images.
    for (var ligne = 1; ligne < emplacementDossier.length; ligne++) {
      echiquier += "<tr>"
      // Je reprend la position actuelle
      // Et j'applique a la position du txt
      var positionLigne = emplacementDossier[ligne]
      var colonne
      echiquier += "<td>" + positionLigne.charAt(0) + "</td>"

      // J'applique dans une boucles jusqu'a ma longueur mon carré Noir et Blanc
      // Et pour reconnaitre si c'est noir ou blanc je divise par 2 mes 8 cases
      for (colonne = 1; colonne < positionLigne.length; colonne++) {
        if ((colonne + ligne) % 2 == 0) 
          echiquier += "<td class='blanc'><img src='xx' id='img" + ligne + colonne + "'></td>"
        else 
          echiquier += "<td class='noir'><img src='yy' id='img" + ligne + colonne + "'></td>"
      }
    }

    // Je remets le tout dans ma Div comme sa elle peut prendre les paramètres de mon CSS.
    document.getElementById("echiquier").innerHTML = echiquier;

    // J'analyse mes lignes pour savoir a quel position les lettres autres que X sont positioner
    // Je prend ensuite le nom de mon image a chaque fois et je vérifie ou en haut du script
    // Les cases avec un charactère on été positionner.
    // Je charge l'image depuis le dossier et je l'applique a l'emplacement.
    for (var ligne2 = 1; ligne2 < emplacementDossier.length; ligne2++) {
      var positionLigne2 = emplacementDossier[ligne2]
      for (var colonne = 1; colonne < emplacementDossier.length; colonne++) {
        var img = document.getElementById("img"+ligne2+colonne)
        var imgurl = "images/"+positionLigne2.charAt(colonne) + ".png"
        console.log(("img"+ligne2+colonne),imgurl,img.src)
        img.src = imgurl
      }
    }
  })
  lecture.readAsText(monDossier)
}

input.addEventListener("change", LireEcrireFichier)
