<?PHP
include_once "../config.php";
include_once "../entities/Client.php";
include_once "../cores/ClientC.php";

if (isset($_POST['code_client']) and isset($_POST['type']) and isset($_POST['nom'])){
$Client1C=new ClientC();
$Client1C->affecterCadeau($_POST['code_client'],$_POST['type']);
header('Location: ../client.php');

}else{
	echo "vérifier les champs";
}
//*/

?>