<?PHP
include "../config.php";
class type_fournisseurC {
	function ajoutertype_fournisseur($type_fournisseur){
		$sql="insert into type_fournisseur (type) values (:type)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $type=$type_fournisseur->gettype();
		$req->bindValue(':type',$type);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function affichertype_fournisseur(){
		//$sql="SElECT * From type_fournisseur e inner join formationphp.type_fournisseur a on e.id_event= a.id_event";
		$sql="SElECT * From type_fournisseur";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimertype_fournisseur($id_event,$type){
		$sql="DELETE FROM type_fournisseur where id_type= :id_type and type= :type";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_event',$id_event);
		$req->bindValue(':type',$type);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifiertype_fournisseur($type_fournisseur,$id_type){
		$sql="UPDATE fournisseur SET type=:type WHERE id_typer=:id_type";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
		$type=$type_fournisseur->gettype();
		$req->bindValue(':id_type',$id_type);
		$req->bindValue(':type',$type);
		
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
	
	function recuperertype_fournisseur($id_event){
		$sql="SELECT * from type_fournisseur where id_event=$id_event";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListetype_fournisseurs($tarif){
		$sql="SELECT * from type_fournisseur where date_fin=$tarif";
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