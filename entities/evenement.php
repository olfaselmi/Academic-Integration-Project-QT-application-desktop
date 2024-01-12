<?PHP
class Evenement{
	private $id_event;
	private $titre;
	private $description;
	private $image;
	private $date_debut;
	private $date_fin;
	private $nbr_place;
	function __construct($titre,$description,$image,$date_fin,$nbr_place){
		$this->titre=$titre;
		$this->description=$description;
		$this->image=$image;
		$this->date_fin=$date_fin;
		$this->nbr_place=$nbr_place;
	}
	
	function getid_event(){
		return $this->id_event;
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
	function getdate_debut(){
		return $this->date_debut;
	}
	function getdate_fin(){
		return $this->date_fin;
	}
	function getnbr_place(){
		return $this->nbr_place;
	}
	
}

?>