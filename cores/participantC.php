<?PHP
include "../config.php";
class participantC {
	function ajouterparticipant($participant){
		$sql="insert into participant (code_client,id_event) values (:code_client, :id_event)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $code_client=$participant->getcode_client();
        $id_event=$participant->getid_event();
		$req->bindValue(':code_client',$code_client);
		$req->bindValue(':id_event',$id_event);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function afficherparticipant(){
		//$sql="SElECT * From participant e inner join formationphp.participant a on e.id_event= a.id_event";
		$sql="SElECT * From participant";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerparticipant($id_event,$code_client){
		$sql="DELETE FROM participant where id_event= :id_event and code_client= :code_client";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_event',$id_event);
		$req->bindValue(':code_client',$code_client);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	
	function recupererparticipant($id_event){
		$sql="SELECT * from participant where id_event=$id_event";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListeparticipants($tarif){
		$sql="SELECT * from participant where date_fin=$tarif";
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