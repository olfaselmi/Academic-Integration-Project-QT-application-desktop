<?PHP
include_once "../config.php";
include_once "../entities/Carte_fidelite.php";
include_once "../cores/Carte_fideliteC.php";
if (isset($_POST['modifier'])){
	$Carte_fideliteC1=new Carte_fideliteC();
	$Carte_fidelite1=new Carte_fidelite($_POST['numero'],$_POST['id_carte'],$_POST['code_client']);
	$Carte_fideliteC1->modifierCarte_fidelite($Carte_fidelite1,$_POST['id_carte']);
	//var_dump($_POST['id_carte']);
	header('Location: ../Carte_fidelite.php');
}
?>