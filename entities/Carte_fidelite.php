<?PHP
class Carte_fidelite{
	private $numero;
	private $id_carte;
	private $code_client;
	function __construct($numero,$id_carte,$code_client){
		$this->numero=$numero;
		$this->id_carte=$id_carte;
		$this->code_client=$code_client;
		
	}
	
	function getNumero(){
		return $this->numero;
	}
	function getId_carte(){
		return $this->id_carte;
	}
	function getCode_client(){
		return $this->code_client;
	}
	
	function setNumero($numero){
		$this->numero=$numero;
	}
	
	
}

?>