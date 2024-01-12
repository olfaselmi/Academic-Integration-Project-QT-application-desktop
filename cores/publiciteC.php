<?PHP
include "../config.php";
class publiciteC {
	function ajouterpublicite($publicite){
		$sql="insert into publicite (titre,description,image) values (:titre, :description,:image)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $titre=$publicite->gettitre();
        $description=$publicite->getdescription();
        $image=$publicite->getimage();
        $email=$publicite->getemail();
		$req->bindValue(':titre',$titre);
		$req->bindValue(':description',$description);
		$req->bindValue(':image',$image);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function afficherpublicite(){
		//$sql="SElECT * From publicite e inner join formationphp.publicite a on e.id_publicite= a.id_publicite";
		$sql="SElECT * From publicite";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerpublicite($id_publicite){
		$sql="DELETE FROM publicite where id_publicite= :id_publicite";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_publicite',$id_publicite);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifierpublicite($publicite,$id_pub){
		$sql="UPDATE publicite SET titre=:titre, description=:description, image=:image WHERE id_pub=:id_pub";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
		$titre=$publicite->gettitre();
        $description=$publicite->getdescription();
        $image=$publicite->getimage();
		$req->bindValue(':id_pub',$id_pub);
		$req->bindValue(':titre',$titre);
		$req->bindValue(':description',$description);
		$req->bindValue(':image',$image);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recupererpublicite($id_publicite){
		$sql="SELECT * from publicite where id_pub=$id_pub";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListepublicites($tarif){
		$sql="SELECT * from publicite where date_fin=$tarif";
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