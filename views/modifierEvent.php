<?PHP

include "../config.php";
include "../entities/evenement.php";
include "../cores/evenementC.php";
if (isset($_POST['modif'])){
  $evenementC=new evenementC();
  if (isset($_FILES['image'])){$image = file_get_contents($_FILES['image']['tmp_name']);}
  $evenement=new evenement($_POST['Titre'],$_POST['Description'],$image,$_POST['Date'],$_POST['Place']);
  $evenementC->modifierevenement($evenement,$id_event);
  header('Location: ../evenement.php');
}
?>