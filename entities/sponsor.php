<?PHP
class Evenement{
	private $id_sponsor;
	private $nom;
	private $prenom;
	private $adresse;
	
	function __construct($id_sponsor,$nom,$prenom,$adresse){
		$this->id_sponsor=$id_sponsor;
		$this->nom=$nom;
		$this->prenom=$prenom;
		$this->adresse=$adresse;
	}
	
	function getid_sponsor(){
		return $this->id_sponsor;
	}
	function getnom(){
		return $this->nom;
	}
	function getprenom(){
		return $this->prenom;
	}
	function getadresse(){
		return $this->adresse;
	}
	
}

?>