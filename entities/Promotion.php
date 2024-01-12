<?PHP
class Promotion{
	private $nom;
	private $id_promotion;
	private $id_produit;
	private $pourcentage;
	function __construct($nom,$id_promotion,$id_produit,$pourcentage){
		$this->nom=$nom;
		$this->id_promotion=$id_promotion;
		$this->id_produit=$id_produit;
		$this->pourcentage=$pourcentage;
	}
	
	function getNom(){
		return $this->nom;
	}
	function getId_promotion(){
		return $this->id_promotion;
	}
	function getId_produit(){
		return $this->id_produit;
	}
	function getPourcentage(){
		return $this->pourcentage;
	}

	function setNom($nom){
		$this->nom=$nom;
	}
	
	function setPourcentage($pourcentage){
		$this->pourcentage=$pourcentage;
	}
	
}

?>