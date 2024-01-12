<?php
include_once "../config.php";
include_once "../entities/Produit.php";
include_once "../cores/ProduitC.php";

$uploads_dir = '../images';


$photo=$_FILES['photo']['name'];
$tmp=$_FILES['photo']['tmp_name'];


//if (isset($_POST['modifier'])){
  $ProduitC1=new ProduitC();

$Produit1=new Produit($_POST['nom'],$_POST['prix']+0,$_POST['quantite']+0,$_POST['description'],$photo,$_POST['catou']+0);
var_dump($Produit1);
if( move_uploaded_file($tmp,$uploads_dir.'/'.$photo)){
    echo 'moved!!';

}else {
    echo 'error';
}
var_dump($_POST['id_Produit']+0)    ;

  $ProduitC1->modifierProduit($Produit1,$_POST['id_Produit']+0);
  header('Location: afficherProduit.php');

//}
?>