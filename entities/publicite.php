<?PHP
class Evenement{
	private $id_pub;
	private $titre;
	private $description;
	private $image;
	
	function __construct($id_pub,$titre,$description,$image){
		$this->id_pub=$id_pub;
		$this->titre=$titre;
		$this->description=$description;
		$this->image=$image;
	}
	
	function getid_pub(){
		return $this->id_pub;
	}
	function gettitre(){
		return $this->titre;
	}
	function getdescription(){
		return $this->description;
	}
	function getimage(){
		return $this->image;
	}
	
}

?>