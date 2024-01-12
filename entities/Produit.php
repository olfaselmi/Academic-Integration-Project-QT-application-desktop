<?PHP
class Produit{
	private $id_produit;
	private $nom;
	private $prix;
	private $quantite;
	private $description;
	private $image;
	private $categorie;

		function __construct($nom,$prix,$quantite,$description,$image,$categorie){
		
		$this->nom=$nom;
		$this->prix=$prix;
		$this->quantite=$quantite;
		$this->description=$description;
		$this->image=$image;
	    $this->categorie=$categorie;
	}

	function getId_Produit(){
		return $this->id_produit;
	}
	function getnom(){
		return $this->nom;
	}
	function getPrix(){ 
		return $this->prix;
	}
	function getQuantite(){
		return $this->quantite;
	}
	function getDescription(){
		return $this->description;
	}

		function getimage(){
		return $this->image;
	}


	function setimage($image){
		$this->image=$image;
	}
	
	function setnom($nom){
		$this->nom=$nom;
	}
	
	function setPrix($prix){
		$this->prix=$prix;
	}

	function setQuantite($quantite){
		$this->quantite=$quantite;
	}
	function setDescription($description){
		$this->description=$description;
	}
	function getcategorie(){
		    return $this->categorie;
    }
    function setcategorie($categorie){
		    $this->$categorie=$categorie;
    }
}

?>