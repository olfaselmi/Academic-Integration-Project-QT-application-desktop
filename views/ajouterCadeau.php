<?php
include_once "../config.php";
include_once "../entities/Cadeau.php";
include_once "../cores/CadeauC.php";

if (isset($_POST['id_cadeau']) and isset($_POST['type']) and isset($_POST['prix']) and isset($_POST['quantite'])){
$Cadeau1=new Cadeau($_POST['id_cadeau'],$_POST['type'],$_POST['prix'],$_POST['quantite']);
$Cadeau1C=new CadeauC();
$Cadeau1C->ajouterCadeau($Cadeau1);
header('Location: ../cadeau.php');

}else{
	echo "vérifier les champs";
}
//*/

?>