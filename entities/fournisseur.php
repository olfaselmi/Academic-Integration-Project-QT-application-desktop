<?PHP
class Evenement{
	private $id_fournisseur;
	private $nom;
	private $prenom;
	private $adresse;
	private $email;
	
	function __construct($id_fournisseur,$nom,$prenom,$adresse,$email){
		$this->id_fournisseur=$id_fournisseur;
		$this->nom=$nom;
		$this->prenom=$prenom;
		$this->adresse=$adresse;
		$this->email=$email;
		
	}
	
	function getid_fournisseur(){
		return $this->id_fournisseur;
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
	function getemail(){
		return $this->email;
	}
	
}

?>