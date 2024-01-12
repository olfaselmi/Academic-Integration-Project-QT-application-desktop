<?PHP
include_once "../config.php";
include_once "../cores/ClientC.php";
include_once "../entities/Carte_fidelite.php";
include_once "../cores/Carte_fideliteC.php";


//*/

$ClientC=new ClientC();
$listeClients=$ClientC->afficherClients();

//var_dump($listeClients->fetchAll());

$code_client = $_POST['code_client'];
$verif = 0;
foreach($listeClients as $row){
	 if($code_client==$row['code_client'])
	 	$verif = 1;
}
if ($verif == 1) {
	if (isset($_POST['numero']) and isset($_POST['id_carte']) and isset($_POST['code_client'])){
	$Carte_fidelite1=new Carte_fidelite($_POST['numero'],$_POST['id_carte'],$_POST['code_client']);
	//Partie2
	/*
	var_dump($Carte_fidelite1);
	}
	*/
    $Carte_fidelite1C=new Carte_fideliteC();
	$Carte_fidelite1C->ajouterCarte_fidelite($Carte_fidelite1);
	header('Location: ../Carte_fidelite.php');
	}else{
		echo "vérifier les champs";
	}
}
?>

