<?PHP
include "../config.php";
class fournisseurC {
	function ajouterfournisseur($fournisseur){
		$sql="insert into fournisseur (nom,prenom,adresse,email) values (:nom, :prenom,:adresse,:email)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $nom=$fournisseur->getnom();
        $prenom=$fournisseur->getprenom();
        $adresse=$fournisseur->getadresse();
        $email=$fournisseur->getemail();
		$req->bindValue(':nom',$nom);
		$req->bindValue(':prenom',$prenom);
		$req->bindValue(':adresse',$adresse);
		$req->bindValue(':email',$email);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function afficherfournisseur(){
		//$sql="SElECT * From fournisseur e inner join formationphp.fournisseur a on e.id_fournisseur= a.id_fournisseur";
		$sql="SElECT * From fournisseur";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerfournisseur($id_fournisseur){
		$sql="DELETE FROM fournisseur where id_fournisseur= :id_fournisseur";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_fournisseur',$id_fournisseur);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifierfournisseur($fournisseur,$id_fournisseur){
		$sql="UPDATE fournisseur SET nom=:nom, prenom=:prenom, adresse=:adresse, email=:email WHERE id_fournisseur=:id_fournisseur";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
		$nom=$fournisseur->getnom();
        $prenom=$fournisseur->getprenom();
        $adresse=$fournisseur->getadresse();
        $email=$fournisseur->getemail();
		$req->bindValue(':id_fournisseur',$id_fournisseur);
		$req->bindValue(':nom',$nom);
		$req->bindValue(':prenom',$prenom);
		$req->bindValue(':adresse',$adresse);
		$req->bindValue(':email',$email);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recupererfournisseur($id_fournisseur){
		$sql="SELECT * from fournisseur where id_fournisseur=$id_fournisseur";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListefournisseurs($tarif){
		$sql="SELECT * from fournisseur where date_fin=$tarif";
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