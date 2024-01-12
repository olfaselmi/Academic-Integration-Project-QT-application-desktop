<?PHP
include_once "../config.php";
include_once "../cores/ClientC.php";
$ClientC=new ClientC();
if (isset($_POST["code_client"])){
	$ClientC->supprimerClient($_POST["code_client"]);
	header('Location: ../client.php');
}

?>