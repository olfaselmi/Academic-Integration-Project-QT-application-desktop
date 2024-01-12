<?PHP
class PromotionC {
function afficherPromotion ($Promotion){
		echo "nom: ".$Promotion->getNom()."<br>";
		echo "id_promotion: ".$Promotion->getId_promotion()."<br>";
		echo "id_produit: ".$Promotion->getId_produit()."<br>";
		echo "pourcentage: ".$Promotion->getPourcentage()."<br>";
	}
	function pourcent($Promotion,$pourcentage){
		$sql="UPDATE Produit SET prixProduit=prixProduit-(prixProduit*($pourcentage/100)) WHERE idProduit=:idProduit";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
		try{		
        $req=$db->prepare($sql);
        $idProduit=$Promotion->getId_produit();
		$req->bindValue(':idProduit',$idProduit);
		
		$s=$req->execute();
		// header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
        }
	}
	
	function ajouterPromotion($Promotion){
		$sql="insert into Promotion (nom,id_promotion,idProduit,pourcentage) values (:nom, :id_promotion,:id_produit,:pourcentage)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $nom=$Promotion->getNom();
        $id_promotion=$Promotion->getId_promotion();
        $id_produit=$Promotion->getId_produit();
        $pourcentage=$Promotion->getPourcentage();
		$req->bindValue(':nom',$nom);
		$req->bindValue(':id_promotion',$id_promotion);
		$req->bindValue(':id_produit',$id_produit);
		$req->bindValue(':pourcentage',$pourcentage);
		
        $req->execute();
        PromotionC::pourcent($Promotion,$pourcentage);
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function afficherPromotions(){
		//$sql="SElECT * From Cadeau e inner join formationphp.Cadeau a on e.Id_cadeau= a.Id_cadeau";
		$sql="SElECT * From Promotion";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerPromotion($id_promotion){
		$sql="DELETE FROM Promotion where id_promotion= :id_promotion";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_promotion',$id_promotion);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifierPromotion($Promotion,$id_promotion){
		$sql="UPDATE Promotion SET nom=:nom, idProduit=:id_produit, pourcentage=:pourcentage WHERE id_promotion=:id_promotion";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
		$nom=$Promotion->getNom();
        $id_promotionn=$Promotion->getId_promotion();
        $id_produit=$Promotion->getId_produit();
        $pourcentage=$Promotion->getPourcentage();
		$datas = array(':id_promotionn'=>$id_promotionn, ':id_promotion'=>$id_promotion, ':nom'=>$nom,':id_produit'=>$id_produit,':pourcentage'=>$pourcentage);
		//$req->bindValue(':id_promotionn',$id_promotionn);
		$req->bindValue(':id_promotion',$id_promotion);
		$req->bindValue(':nom',$nom);
		$req->bindValue(':id_produit',$id_produit);
		$req->bindValue(':pourcentage',$pourcentage);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recupererPromotion($id_promotion){
		$sql="SELECT * from Promotion where id_promotion=$id_promotion";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListePromotions($nom){
		$sql="SELECT * from Promotion where nom=$nom";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
}

?>