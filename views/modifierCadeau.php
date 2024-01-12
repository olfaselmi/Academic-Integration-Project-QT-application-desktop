<?PHP
include_once "../config.php";
include_once "../entities/Cadeau.php";
include_once "../cores/CadeauC.php";
if (isset($_POST['modifier'])){
  $CadeauC1=new CadeauC();
  $Cadeau1=new Cadeau($_POST['id_cadeau'],$_POST['type'],$_POST['prix'],$_POST['quantite']);
  //var_dump($_POST['id_cadeau'] );
  $CadeauC1->modifierCadeau($Cadeau1,$_POST['id_cadeau']);
  header('Location: ../cadeau.php');
}
?>