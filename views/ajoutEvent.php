<?PHP
include_once "../config.php";
include_once "../entities/evenement.php";
include_once "../cores/evenementC.php";
$image = file_get_contents($_FILES['image']['tmp_name']);
$evenement1 = new evenement($_POST['Titre'],$_POST['Description'],$image,$_POST['Date'],$_POST['Place']);

$evenement1C=new evenementC();
$evenement1C->ajouterevenement($evenement1);
header('Location: ../evenement.php');
//*/

?>