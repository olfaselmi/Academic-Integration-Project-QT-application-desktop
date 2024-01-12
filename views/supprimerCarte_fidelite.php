<?PHP
include_once "../config.php";
include_once "../cores/Carte_fideliteC.php";
$Carte_fideliteC=new Carte_fideliteC();
if (isset($_POST["id_carte"])){
	$Carte_fideliteC->supprimerCarte_fidelite($_POST["id_carte"]);
	header('Location: ../Carte_fidelite.php');
}

?>