<?PHP
class Evenement{
	private $id_type;
	private $type;
	
	function __construct($id_type,$type){
		$this->id_type=$id_type;
		$this->type=$type;
		
	}
	
	function getid_type(){
		return $this->id_type;
	}
	function gettype(){
		return $this->type;
	}
	
}

?>