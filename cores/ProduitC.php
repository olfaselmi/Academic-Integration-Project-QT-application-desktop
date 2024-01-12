<?PHP

class ProduitC {
function afficherProduit ($Produit){
		echo "Id_Produit: ".$Produit->getId_Produit()."<br>";
		echo "Type: ".$Produit->getType()."<br>";
		echo "Prix: ".$Produit->getPrix()."<br>";
		echo "Quantite: ".$Produit->getQuantite()."<br>";
		echo "description: ".$Produit->getDescription()."<br>";
	}
	
	function ajouterProduit($Produit){
		$sql="insert into Produit (nom,prix,quantite,description,image,categorie) values (:nom, :prix,:quantite,:description,:image,:categorie)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        
        $nom=$Produit->getnom();
        $prix=$Produit->getPrix();
        $quantite=$Produit->getQuantite();
        $description=$Produit->getDescription();
        $image=$Produit->getimage();
        $cate=$Produit->getcategorie();
		$req->bindValue(':nom',$nom);
		$req->bindValue(':prix',$prix);
		$req->bindValue(':quantite',$quantite);
		$req->bindValue(':description',$description);
		$req->bindValue(':image',$image);
		$req->bindValue(':categorie',$cate);
            $req->execute();
           
        }
        
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
		function supprimerProduit($id_Produit){
		$sql="DELETE FROM Produit where id_Produit= :id_Produit";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_Produit',$id_Produit);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function afficherProduits(){
	    $sql="SElECT * From Produit";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);		
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}

	function modifierProduit($Produit,$id_Produit){


        $description=$Produit->getDescription();
        $prix=$Produit->getPrix();
        $quantite=$Produit->getQuantite();
		 $nom=$Produit->getnom();
		 $img=$Produit->getimage();
		 $ctt=$Produit->getcategorie();

$sql = " UPDATE  Produit set nom= :nom ,description = :description,prix = :prix , quantite= :quantite ,image= :image, categorie= :cat where id_Produit= :id_produit";


   	
       
        	$db = config::getConnexion();

        try{		
        $req=$db->prepare($sql);


		$req->bindValue(':quantite',$quantite);
		$req->bindValue(':description',$description);
		$req->bindValue(':nom',$nom);
		$req->bindValue(':prix',$prix);
		$req->bindValue(':quantite',$quantite);
		$req->bindValue(':image',$img);
		$req->bindValue(':cat',$ctt);
            $req->bindValue(':id_produit',$id_Produit);
            $s=$req->execute();
			}      catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();

        }
		
	}
    function recupererProduit($id_Produit){
        $sql="SELECT * from Produit where id_Produit=$id_Produit";
        $db = config::getConnexion();
        try{
            $liste=$db->query($sql);
            return $liste;
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
    }


//header("location:affichageCompagnie.php");
		
	
	

	
	function rechercherProduit($type){
		$sql="SELECT * from Produit inner join categorie on categorie.id_cat = produit.categorie where nom like '%$type%' or Produit.description like '%description%' or prix like '%$type%' or categorie.type like '%$type%'";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste->fetchAll();
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}

}

?>