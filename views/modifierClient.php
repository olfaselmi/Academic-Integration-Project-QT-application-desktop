<HTML>
<head>
</head>
<body>
<?php
include_once "../entities/Client.php";
include_once "../core/ClientC.php";
if (isset($_GET['code_client'])){
	$ClientC=new ClientC();
    $result=$ClientC->recupererClient($_GET['code_client']);
	foreach($result as $row){
		$nom=$row['nom'];
		$prenom=$row['prenom'];
		$email=$row['email'];
		$code_client=$row['code_client'];
		$credit=$row['credit'];
		$pwd=$row['pwd'];
		$cadeau=$row['cadeau'];
?>
<form method="POST">
<table>
<caption>ModifierClient</caption>
<tr>
<td>Nom</td>
<td><input type="text" name="nom" value="<?PHP echo $nom ?>"></td>
</tr>
<tr>
<td>Prenom</td>
<td><input type="text" name="prenom" value="<?PHP echo $prenom ?>"></td>
</tr>
<tr>
<td>Email</td>
<td><input type="text" name="email" value="<?PHP echo $email ?>"></td>
</tr>
<tr>
<td>Code client</td>
<td><input type="number" name="code_client" value="<?PHP echo $code_client ?>"></td>
</tr>
<tr>
<td>Credit</td>
<td><input type="number" name="credit" value="<?PHP echo $credit ?>"></td>
</tr>
<tr>
<td>Pwd</td>
<td><input type="password" name="pwd" value="<?PHP echo $pwd ?>"></td>
</tr>
<tr>
<td>Cadeau</td>
<td><input type="text" name="cadeau" value="<?PHP echo $pwd ?>"></td>
</tr>
<tr>
<td></td>
<td><input type="submit" name="modifier" value="modifier"></td>
</tr>
<tr>
<td></td>
<td><input type="hidden" name="code_client_ini" value="<?PHP echo $_GET['code_client'];?>"></td>
</tr>
</table>
</form>
<?PHP
	}
}
if (isset($_POST['modifier'])){
	$Client=new Client($_POST['nom'],$_POST['prenom'],$_POST['email'],$_POST['code_client'],$_POST['credit'],$_POST['pwd'],$_POST['cadeau']);
	$ClientC->modifierClient($Client,$_POST['code_client_ini']);
	echo $_POST['code_client_ini'];
	header('Location: afficherClient.php');
}
?>
</body>
</HTMl>