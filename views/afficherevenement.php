<?PHP
include_once "config.php";
include_once "cores/evenementC.php";
$evenement1C=new evenementC();
$listeevenements=$evenement1C->afficherevenement();

foreach($listeevenements as $row){
	?>
	<tr>
	<td><?PHP echo ""; ?></td>
	<td><?PHP echo $row['id_event']; ?></td>
	<td><?PHP echo $row['titre']; ?></td>
	<td><?PHP echo $row['description']; ?></td>
	<td><?PHP echo $row['date_debut']; ?></td>
	<td><?PHP echo $row['date_fin']; ?></td>
	<td><?PHP echo $row['nbr_place']; ?></td>
	<td><form method="POST" action="views/supprimerevenement.php">
	<input type="submit" name="supprimer" class="btn btn-danger" value="supprimer">
	<input type="hidden" value="<?PHP echo $row['id_event']; ?>" name="id_event">
	</form>
	</td>
	<td><a href="modifierevenement.php?id=<?PHP echo $row['id_event']; ?>">
	<input type="button" name="" class="btn btn-warning" value="Modifier"></a></td>
	</tr>
	<?PHP
}
?>
</table>


