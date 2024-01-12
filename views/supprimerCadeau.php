<?PHP
include_once "../config.php";
include_once "../cores/CadeauC.php";
$CadeauC=new CadeauC();
if (isset($_POST["id_cadeau"])){
	$CadeauC->supprimerCadeau($_POST["id_cadeau"]);
	header('Location: afficherCategorie.php');
}

?>