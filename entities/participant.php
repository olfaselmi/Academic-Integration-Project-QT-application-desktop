<?PHP
class Evenement{
	private $code_client;
	private $id_event;
	
	function __construct($code_client,$id_event){
		$this->code_client=$code_client;
		$this->id_event=$id_event;
		
	}
	
	function getcode_client(){
		return $this->code_client;
	}
	function getid_event(){
		return $this->id_event;
	}
	
}

?>