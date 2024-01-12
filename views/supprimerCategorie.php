<?PHP
include_once "../config.php";
include_once "../cores/categorieC.php";
$categorieC=new categorieC();
if (isset($_POST["id_categorie"])){
	$categorieC->supprimercategorie($_POST["id_categorie"]);
	header('Location: afficherCategorie.php');
}


?>