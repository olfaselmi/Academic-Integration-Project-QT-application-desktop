<?PHP
require_once "../config.php";
require_once "../entities/Client.php";
require_once "../cores/ClientC.php";

if (isset($_POST['nom']) and isset($_POST['prenom']) and isset($_POST['email']) and isset($_POST['code_client']) and isset($_POST['credit']) and isset($_POST['pwd']) and isset($_POST['cadeau'])){
$Client1=new Client($_POST['nom'],$_POST['prenom'],$_POST['email'],$_POST['code_client'],$_POST['credit'],$_POST['pwd'],$_POST['cadeau']);
//Partie2
/*
var_dump($Client1);
}
*/
//Partie3
//var_dump($Client1);
$Client1C=new ClientC();
$Client1C->ajouterClient($Client1);
header('Location: ../client.php');
	
}else{
	echo "vérifier les champs";
}
//*/

?>