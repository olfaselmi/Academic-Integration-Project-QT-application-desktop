<?PHP
include_once "../config.php";
include "../cores/PromotionC.php";
$PromotionC=new PromotionC();
if (isset($_POST["id_promotion"])){
	$PromotionC->supprimerPromotion($_POST["id_promotion"]);
	header('Location: ../Promotion.php');
}

?>