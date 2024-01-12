<?PHP
include_once "config.php";
include_once "cores/Carte_fideliteC.php";
$Carte_fidelite1C=new Carte_fideliteC();
$listeCarte_fidelites=$Carte_fidelite1C->afficherCarte_fidelites();

//var_dump($listeCarte_fidelites->fetchAll());
foreach($listeCarte_fidelites as $row){
	?>
	<tr>
		<td></td>
	<td><?PHP echo $row['id_carte']; ?></td>
	<td><?PHP echo $row['code_client']; ?></td>
	<td><?PHP echo $row['numero']; ?></td>
	<td><form method="POST" action="views/supprimerCarte_fidelite.php">
	<input type="submit" name="supprimer" class="btn btn-danger" value="supprimer">
	<input type="hidden" value="<?PHP echo $row['id_carte']; ?>" name="id_carte">
	</form>
	</td>
	<td><a href="modifierCarte_fidelite.php?id_carte=<?PHP echo $row['id_carte']; ?>">
	<input type="button" name="" class="btn btn-warning" value="Modifier"></a></td></a></td>
	</tr>
	<?PHP
}
?>



