<?PHP

class evenementC {
	function ajouterevenement($evenement){
		$sql="insert into evenement (titre,description,image,date_fin,nbr_place) values (:titre, :description,:image,:date_fin,:nbr_place)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $titre=$evenement->gettitre();
        $description=$evenement->getdescription();
        $image=$evenement->getimage();
        $date_fin=$evenement->getdate_fin();
        $nbr_place=$evenement->getnbr_place();
		$req->bindValue(':titre',$titre);
		$req->bindValue(':description',$description);
		$req->bindValue(':image',$image);
		$req->bindValue(':date_fin',$date_fin);
		$req->bindValue(':nbr_place',$nbr_place);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function afficherevenement(){
		//$sql="SElECT * From evenement e inner join formationphp.evenement a on e.id_event= a.id_event";
		$sql="SElECT * From evenement";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerevenement($id_event){
		$sql="DELETE FROM evenement where id_event= :id_event";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_event',$id_event);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifierevenement($evenement,$id_event){
		$sql="UPDATE evenement SET titre=:titre, description=:description, image=:image, date_fin=:date_fin, nbr_place=:nbr_place WHERE id_event=:id_event";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
		$titre=$evenement->gettitre();
        $description=$evenement->getdescription();
        $image=$evenement->getimage();
        $date_fin=$evenement->getdate_fin();
        $nbr_place=$evenement->getnbr_place();
		$req->bindValue(':id_event',$id_event);
		$req->bindValue(':titre',$titre);
		$req->bindValue(':description',$description);
		$req->bindValue(':image',$image);
		$req->bindValue(':date_fin',$date_fin);
		$req->bindValue(':nbr_place',$nbr_place);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recupererevenement($id_event){
		$sql="SELECT * from evenement where id_event=$id_event";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListeevenements($tarif){
		$sql="SELECT * from evenement where date_fin=$tarif";
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