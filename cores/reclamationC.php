<?PHP
include "../config.php";
class reclamationC {
	function ajouterreclamation($reclamation){
		$sql="insert into reclamation (nom,email,libelle,objet,date_reclamation,etat) values (:nom, :email,:libelle,:objet,:date_reclamation,:etat)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $nom=$reclamation->getnom();
        $email=$reclamation->getemail();
        $libelle=$reclamation->getlibelle();
        $objet=$reclamation->getobjet();
        $date_reclamation=$reclamation->getdate_reclamation();
        $etat=$reclamation->getetat();
		$req->bindValue(':nom',$nom);
		$req->bindValue(':email',$email);
		$req->bindValue(':libelle',$libelle);
		$req->bindValue(':objet',$objet);
		$req->bindValue(':date_reclamation',$date_reclamation);
		$req->bindValue(':etat',$etat);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function afficherreclamation(){
		//$sql="SElECT * From reclamation e inner join formationphp.reclamation a on e.id_reclamation= a.id_reclamation";
		$sql="SElECT * From reclamation";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerreclamation($id_reclamation){
		$sql="DELETE FROM reclamation where id_reclamation= :id_reclamation";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_reclamation',$id_reclamation);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifierreclamation($reclamation,$id_reclamation){
		$sql="UPDATE reclamation SET nom=:nom, email=:email, libelle=:libelle, objet=:objet, date_reclamation=:date_reclamation, etat=:etat WHERE id_reclamation=:id_reclamation";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
		$nom=$reclamation->getnom();
        $email=$reclamation->getemail();
        $libelle=$reclamation->getlibelle();
        $objet=$reclamation->getobjet();
        $date_reclamation=$reclamation->getdate_reclamation();
        $etat=$reclamation->getetat();
		$req->bindValue(':id_reclamation',$id_reclamation);
		$req->bindValue(':nom',$nom);
		$req->bindValue(':email',$email);
		$req->bindValue(':libelle',$libelle);
		$req->bindValue(':objet',$objet);
		$req->bindValue(':date_reclamation',$date_reclamation);
		$req->bindValue(':etat',$etat);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recupererreclamation($id_reclamation){
		$sql="SELECT * from reclamation where id_reclamation=$id_reclamation";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListereclamations($tarif){
		$sql="SELECT * from reclamation where date_reclamation=$tarif";
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