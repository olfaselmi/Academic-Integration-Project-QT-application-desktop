<?PHP
class categorie{
	private $id_categorie;
	private $type;
	private $description;

	
		function __construct($type,$description){
		
		$this->type=$type;
		$this->description=$description;
		
		
	
	}
	function getId_categorie(){
		return $this->id_categorie;
	}
	function getType(){
		return $this->type;
	}
	
	function getDescription(){
		return $this->description;
	}

	

	
	
	function setid_categorie($id_categorie){
		$this->id_categorie=$id_categorie;
	}
	
	function setType($Type){
		$this->Type=$Type;
	}

	
	function setDescription($description){
		$this->description=$description;
	}
}

?>