<?PHP
include_once "../config.php";
include_once "../entities/Promotion.php";
include_once "../cores/PromotionC.php";
if (isset($_POST['modifier'])){
	$PromotionC1=new PromotionC();
	$Promotion1=new Promotion($_POST['nom'],$_POST['id_promotion'],$_POST['id_produit'],$_POST['pourcentage']);
	//var_dump($_POST['id_produit'] );
	$PromotionC1->modifierPromotion($Promotion1,$_POST['id_promotion']);
	header('Location: ../Promotion.php');
}
?>