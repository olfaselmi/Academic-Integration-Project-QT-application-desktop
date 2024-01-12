<?php
include_once "../config.php";
include_once "../entities/categorie.php";
include_once "../cores/categorieC.php";

if (isset($_POST['description']) and isset($_POST['type']) ){
$categorie1=new categorie($_POST['description'],$_POST['type']);
$categorie1C=new categorieC();
$categorie1C->ajoutercategorie($categorie1);
//header('Location: ../categorie.php');

}else{
	echo "vérifier les champs";
}
header('location:afficherCategorie.php');
//*/
?>