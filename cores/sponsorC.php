<?PHP
include "../config.php";
class sponsorC {
	function ajoutersponsor($sponsor){
		$sql="insert into sponsor (nom,prenom,adresse) values (:nom, :prenom,:adresse)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $nom=$sponsor->getnom();
        $prenom=$sponsor->getprenom();
        $adresse=$sponsor->getadresse();
        $email=$sponsor->getemail();
		$req->bindValue(':nom',$nom);
		$req->bindValue(':prenom',$prenom);
		$req->bindValue(':adresse',$adresse);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function affichersponsor(){
		//$sql="SElECT * From sponsor e inner join formationphp.sponsor a on e.id_sponsor= a.id_sponsor";
		$sql="SElECT * From sponsor";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimersponsor($id_sponsor){
		$sql="DELETE FROM sponsor where id_sponsor= :id_sponsor";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_sponsor',$id_sponsor);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifiersponsor($sponsor,$id_sponsor){
		$sql="UPDATE sponsor SET nom=:nom, prenom=:prenom, adresse=:adresse WHERE id_sponsor=:id_sponsor";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
		$nom=$sponsor->getnom();
        $prenom=$sponsor->getprenom();
        $adresse=$sponsor->getadresse();
		$req->bindValue(':id_sponsor',$id_sponsor);
		$req->bindValue(':nom',$nom);
		$req->bindValue(':prenom',$prenom);
		$req->bindValue(':adresse',$adresse);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recuperersponsor($id_sponsor){
		$sql="SELECT * from sponsor where id_sponsor=$id_sponsor";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListesponsors($tarif){
		$sql="SELECT * from sponsor where date_fin=$tarif";
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