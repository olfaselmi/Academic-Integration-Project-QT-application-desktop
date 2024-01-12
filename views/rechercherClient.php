<?PHP
include_once "../config.php";
include_once "../cores/clientC.php";
if (isset($_POST['rechercher_code_client'])){
  $ClientC1=new ClientC();
  //var_dump($_POST['id_cadeau'] );
  $ClientC1->rechercherClient($_POST['rechercher_code_client']);
  header('Location: ../client.php');
}
?>