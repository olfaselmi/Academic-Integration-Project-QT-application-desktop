<?php
include_once "../config.php";
include_once "../entities/Produit.php";
include_once "../cores/ProduitC.php";

$uploads_dir = '../images';


	  $photo=$_FILES['photo']['name'];
	$tmp=$_FILES['photo']['tmp_name'];
    
    
$Produit1=new Produit($_POST['nom'],$_POST['prix'],$_POST['quantite'],$_POST['description'],$photo,$_POST['catou']+0);

var_dump($Produit1);
$Produit1C=new ProduitC();
 if( move_uploaded_file($tmp,$uploads_dir.'/'.$photo)){
       echo 'moved!!';

   }else {
       echo 'error';
   }
  
$Produit1C->ajouterProduit($Produit1);
header('Location: AfficherProduit.php');



?>