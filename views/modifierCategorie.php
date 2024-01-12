<?PHP
include_once "../config.php";
include_once "../entities/categorie.php";
include_once "../cores/categorieC.php";

$l=$_POST['id_categorie']+0;
var_dump($l);
  $categorieC1=new categorieC();
  $categorie1=new categorie($_POST['type'],$_POST['description']);
  //var_dump($_POST['id_categorie'] );
  $categorieC1->modifiercategorie($categorie1,$l);
  header('Location: afficherCategorie.php');

?>