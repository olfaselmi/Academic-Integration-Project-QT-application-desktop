<?PHP
include_once "../config.php";
include_once "../cores/ProduitC.php";
$ProduitC=new ProduitC();

	$ProduitC->supprimerProduit($_GET["idprod"]+0);
	header('Location:AfficherProduit.php');


?>