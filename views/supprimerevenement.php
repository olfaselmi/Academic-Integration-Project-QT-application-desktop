<?PHP
include_once "../config.php";
include_once "../cores/evenementC.php";
$evenementC=new evenementC();
	$evenementC->supprimerevenement($_POST["id_event"]);
	header('Location: ../evenement.php');

?>