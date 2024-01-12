<?PHP
include_once "config.php";
include_once "cores/ClientC.php";

if(!empty($_POST['rechercher_code_client'])) {
	$listeClients=$Client1C->rechercherClient($_POST['rechercher_code_client']);
	echo "<h3>rechercher Client par Credit</h3>";
} 


//var_dump($listeClients->fetchAll());
?>
<?PHP
foreach($listeClients as $row){
	?>
	<tr>
		<td></td>
		<td></td>
	<td><?PHP echo $row['nom']; ?></td>
	<td><?PHP echo $row['prenom']; ?></td>
	<td><?PHP echo $row['email']; ?></td>
	<td><?PHP echo $row['code_client']; ?></td>
	<td><?PHP echo $row['credit']; ?></td>
	<td><?PHP echo $row['pwd']; ?></td>
	<td><?PHP echo $row['cadeau']; ?></td>
	<td><form method="POST" action="views/supprimerClient.php">
	<input type="submit" name="supprimer" value="supprimer" class="btn btn-danger">
	<input type="hidden" value="<?PHP echo $row['code_client']; ?>" name="code_client">
	</form>
	</td>
	<td><form method="POST" action="">
	<input type="submit" name="affecter" value="affecter" class="btn btn-danger">
	<input type="hidden" value="<?PHP echo $row['code_client']; ?>" name="code_client">
	</form>
	</td>
	</tr>
	<?PHP
}
?>



