<?PHP
include_once "config.php";
include_once "cores/categorieC.php";
$categorie1C=new categorieC();
$listecategories=$categorie1C->affichercategories();

//var_dump($listecategories->fetchAll());
foreach($listecategories as $row){
	?>
	<tr>
		<td></td>
	<td><?PHP echo $row['id_categorie']; ?></td>
	<td><?PHP echo $row['type']; ?></td>
	<td><?PHP echo $row['prix']; ?></td>
	<td><?PHP echo $row['quantite']; ?></td>
	<td><form method="POST" action="views/supprimercategorie.php">
	<input type="submit" name="supprimer" class="btn btn-danger" value="supprimer">
	<input type="hidden" value="<?PHP echo $row['id_categorie']; ?>" name="id_categorie">
	</form>
	</td>
	<td><a href="modifiercategorie.php?id_categorie=<?PHP echo $row['id_categorie']; ?>">
	<input type="button" name="" class="btn btn-warning" value="Modifier"></a></td>
	</tr>
	
	<?PHP
}
?>

