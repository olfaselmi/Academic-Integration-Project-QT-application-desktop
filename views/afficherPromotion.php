<?PHP
include_once "config.php";
include_once "cores/PromotionC.php";
$Promotion1C=new PromotionC();
$listePromotions=$Promotion1C->afficherPromotions();

//var_dump($listePromotions->fetchAll());
foreach($listePromotions as $row){
	?>
	<tr>
		<td></td>
	<td><?PHP echo $row['id_promotion']; ?></td>
	<td><?PHP echo $row['idProduit']; ?></td>
	<td><?PHP echo $row['nom']; ?></td>
	<td><?PHP echo $row['pourcentage']; ?></td>
	<td><form method="POST" action="views/supprimerPromotion.php">
	<input type="submit" name="supprimer" class="btn btn-danger" value="supprimer">
	<input type="hidden" value="<?PHP echo $row['id_promotion']; ?>" name="id_promotion"/>
	</form>
	</td>
	<td><a href="modifierPromotion.php?id_promotion=<?PHP echo $row['id_promotion']; ?>">
	<input type="button" name="" class="btn btn-warning" value="Modifier"></a></td></a></td>
	</tr>
	<?PHP
}
?>



