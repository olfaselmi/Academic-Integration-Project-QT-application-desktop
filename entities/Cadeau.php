<?PHP
class Cadeau{
	private $id_cadeau;
	private $type;
	private $prix;
	private $quantite;
	function __construct($id_cadeau,$type,$prix,$quantite){
		$this->id_cadeau=$id_cadeau;
		$this->type=$type;
		$this->prix=$prix;
		$this->quantite=$quantite;
	}
	
	function getId_cadeau(){
		return $this->id_cadeau;
	}
	function getType(){
		return $this->type;
	}
	function getPrix(){
		return $this->prix;
	}
	function getQuantite(){
		return $this->quantite;
	}

	function setType($type){
		$this->type=$type;
	}
	
	function setPrix($prix){
		$this->prix=$prix;
	}

	function setQuantite($quantite){
		$this->quantite=$quantite;
	}
	
}

?>