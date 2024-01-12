<?PHP
class categorieC {
/*function affichercategorie ($categorie){
		echo "Id_categorie: ".$categorie->getId_categorie()."<br>";
		echo "Type: ".$categorie->getType()."<br>";
		echo "Prix: ".$categorie->getPrix()."<br>";
		echo "Quantite: ".$categorie->getQuantite()."<br>";
	}
	
*/	function ajoutercategorie($categorie){
		$sql="insert into categorie (type,description) values (:type,:description)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
     
        $type=$categorie->gettype();
        $prix=$categorie->getDescription();
        
		$req->bindValue(':type',$type);
		$req->bindValue(':description',$prix);

		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function affichercategories(){
		//$sql="SElECT * From categorie e inner join formationphp.categorie a on e.Id_categorie= a.Id_categorie";
		$sql="SElECT * From categorie";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimercategorie($id_categorie){
		$sql="DELETE FROM categorie where id_cat= :id_categorie";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_categorie',$id_categorie);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function modifiercategorie($categorie,$id_categorie){
		$sql="UPDATE categorie SET type= :type,description= :description WHERE id_cat= :id_categorie";
		
		$db = config::getConnexion();

        try{		
        $req=$db->prepare($sql);

        $type=$categorie->getType();
        $desc=$categorie->getDescription();
     

		$req->bindValue(':description',$desc);
		$req->bindValue(':type',$type);
            $req->bindValue(':id_categorie',$id_categorie);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
    function recuperercategorie($id_categorie){
        $sql="SELECT * from categorie where id_cat=$id_categorie";
        $db = config::getConnexion();
        try{
            $liste=$db->query($sql);
            return $liste;
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
    }
	/*
	
	function recherchercategorie($type){
		$sql="SELECT * from categorie where type like '%$type%'";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	
	*/
}

?>