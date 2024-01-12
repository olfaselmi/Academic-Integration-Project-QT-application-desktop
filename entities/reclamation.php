<?PHP
class Evenement{
	private $id_reclamation;
	private $nom;
	private $email;
	private $libelle;
	private $objet;
	private $date_reclamation;
	private $etat;
	function __construct($id_reclamation,$nom,$email,$libelle,$objet,$date_reclamation,$etat){
		$this->id_reclamation=$id_reclamation;
		$this->nom=$nom;
		$this->email=$email;
		$this->libelle=$libelle;
		$this->objet=$objet;
		$this->date_reclamation=$date_reclamation;
		$this->etat=$etat;
	}
	
	function getid_reclamation(){
		return $this->id_reclamation;
	}
	function getnom(){
		return $this->nom;
	}
	function getemail(){
		return $this->email;
	}
	function getlibelle(){
		return $this->libelle;
	}
	function getobjet(){
		return $this->objet;
	}
	function getdate_reclamation(){
		return $this->date_reclamation;
	}
	function getetat(){
		return $this->etat;
	}
	
}

?>