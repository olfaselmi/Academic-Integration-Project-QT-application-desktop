<?PHP

class Carte_fideliteC {
function afficherCarte_fidelite ($Carte_fidelite){
		echo "Numero: ".$Carte_fidelite->getNumero()."<br>";
		echo "Id_carte: ".$Carte_fidelite->getId_carte()."<br>";
		echo "Code_client: ".$Carte_fidelite->getCode_client()."<br>";
	}
	function ajouterCarte_fidelite($Carte_fidelite){
		$sql="insert into Carte_fidelite (numero,id_carte,code_client) values (:numero, :id_carte,:code_client)";
		$db = config::getConnexion();
		try{
        $req=$db->prepare($sql);
		$numero=$Carte_fidelite->getNumero();
        $id_carte=$Carte_fidelite->getId_carte();
        $code_client=$Carte_fidelite->getCode_client();
		$req->bindValue(':numero',$numero);
		$req->bindValue(':id_carte',$id_carte);
		$req->bindValue(':code_client',$code_client);
	
            $req->execute();
           
        }
        catch (Exception $ca){
            echo 'Erreur: '.$ca->getMessage();
        }
		
	}
	
	function afficherCarte_fidelites(){
		//$sql="SElECT * From Carte_fidelite ca inner join formationphp.Carte_fidelite a on ca.id_carte= a.id_carte";
		$sql="SElECT * From Carte_fidelite";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $ca){
            die('Erreur: '.$e->getMessage());
        }	
	}
	function supprimerCarte_fidelite($id_carte){
		$sql="DELETE FROM Carte_fidelite where id_carte= :id_carte";
		$db = config::getConnexion();
        $req=$db->prepare($sql);
		$req->bindValue(':id_carte',$id_carte);
		try{
            $req->execute();
           // header('Location: index.php');
        }
        catch (Exception $ca){
            die('Erreur: '.$ca->getMessage());
        }
	}
	function modifierCarte_fidelite($Carte_fidelite,$id_carte){
		$sql="UPDATE Carte_fidelite SET numero=:numero,id_carte=:id_carte,code_client=:code_client WHERE id_carte=:id_carte";
		
		$db = config::getConnexion();
		//$db->setAttribute(PDO::ATTR_EMULATE_PREPARES,false);
try{		
        $req=$db->prepare($sql);
        $numero=$Carte_fidelite->getNumero();
        $id_carteee=$Carte_fidelite->getId_carte();
        $code_client=$Carte_fidelite->getCode_client();
		$datas = array( ':numero'=>$numero, ':id_carteee'=>$id_carteee, ':id_carte'=>$id_carte, ':code_client'=>$code_client);
		$req->bindValue(':numero',$numero);
		//$req->bindValue(':id_carteee',$id_carteee);
		$req->bindValue(':id_carte',$id_carte);
		$req->bindValue(':code_client',$code_client);
		
            $s=$req->execute();
			
           // header('Location: index.php');
        }
        catch (Exception $ca){
            echo " Erreur ! ".$e->getMessage();
   echo " Les datas : " ;
  print_r($datas);
        }
		
	}
	function recupererCarte_fidelite($id_carte){
		$sql="SELECT * from Carte_fidelite where id_carte=$id_carte";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $ca){
            die('Erreur: '.$e->getMessage());
        }
	}
	
	function rechercherListeCarte_fidelites($id_carte){
		$sql="SELECT * from Carte_fidelite where id_carte=$id_carte";
		$db = config::getConnexion();
		try{
		$liste=$db->query($sql);
		return $liste;
		}
        catch (Exception $ca){
            die('Erreur: '.$e->getMessage());
        }
	}
}

?>