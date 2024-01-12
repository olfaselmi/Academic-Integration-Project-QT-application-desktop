<?PHP
class CadeauC {
function afficherCadeau ($Cadeau){
		echo "Id_cadeau: ".$Cadeau->getId_cadeau()."<br>";
		echo "Type: ".$Cadeau->getType()."<br>";
		echo "Prix: ".$Cadeau->getPrix()."<br>";
		echo "Quantite: ".$Cadeau->getQuantite()."<br>";
	}
	
	function ajouterCadeau($Cadeau){
		$sql="insert into Cadeau (type,id_cadeau,prix,quantite) values (:type,:id_cadeau, :prix,:quantite)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		
        $id_cadeau=$Cadeau->getId_cadeau();
        $type=$Cadeau->getType();
        $prix=$Cadeau->getPrix();
        $quantite=$Cadeau->getQuantite();
		$req->bindValue(':id_cadeau',$id_cadeau);
		$req->bindValue(':type',$type);
		$req->bindValue(':prix',$prix);
		$req->bindValue(':quantite',$quantite);
		
            $req->execute();
           
        }
        catch (Exception $e){
            echo 'Erreur: '.$e->getMessage();
        }
		
	}
	
	function afficherCadeaus(){
		//$sql="SElECT * From Cadeau e inner join formationphp.Cadeau a on e.Id_cadeau= a.Id_cadeau";
		$sql="SElECT * From Cadeau";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerCadeau($id_cadeau){
		$sql="DELETE FROM Cadeau where id_cadeau= :id_cadeau";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_cadeau',$id_cadeau);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	function modifierCadeau($Cadeau,$id_cadeau){
		$sql="UPDATE Cadeau SET id_cadeau=:id_cadeaun, type=:type,prix=:prix,quantite=:quantite WHERE id_cadeau=:id_cadeau";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
        try{		
        $req=$db->prepare($sql);
		$id_cadeaun=$Cadeau->getId_cadeau();
        $type=$Cadeau->getType();
        $prix=$Cadeau->getPrix();
        $quantite=$Cadeau->getQuantite();
		$datas = array(':id_cadeaun'=>$id_cadeaun, ':id_cadeau'=>$id_cadeau, ':type'=>$type,':prix'=>$prix,':quantite'=>$quantite);
		$req->bindValue(':id_cadeaun',$id_cadeaun);
		$req->bindValue(':id_cadeau',$id_cadeau);
		$req->bindValue(':type',$type);
		$req->bindValue(':prix',$prix);
		$req->bindValue(':quantite',$quantite);
		
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $e){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recupererCadeau($id_cadeau){
		$sql="SELECT * from Cadeau where id_cadeau=$id_cadeau";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $e){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherCadeau($type){
		$sql="SELECT * from Cadeau where type like '%$type%'";
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