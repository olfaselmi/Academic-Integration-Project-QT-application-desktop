<?PHP
include_once "../config.php";
include_once "../entities/Promotion.php";
include_once "../cores/PromotionC.php";

if (isset($_POST['nom']) and isset($_POST['id_promotion']) and isset($_POST['id_produit']) and isset($_POST['pourcentage'])){
$Promotion1=new Promotion($_POST['nom'],$_POST['id_promotion'],$_POST['id_produit'],$_POST['pourcentage']);
//Partie2
/*
var_dump($Client1);
}
*/
//Partie3
$Promotion1C=new PromotionC();
$Promotion1C->ajouterPromotion($Promotion1);
header('Location: ../Promotion.php');
	
}else{
	echo "vérifier les champs";
}
//*/

?>