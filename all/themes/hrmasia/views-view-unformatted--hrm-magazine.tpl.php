<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php 
 $row_counts = count($rows);  

 for($i=0;$i<$row_counts;$i++){  ?>
  <div<?php if ($classes_array[$i]) { print ' class="' . $classes_array[$i] .'"';  } ?>>
    <span><?php print $rows[$i]; ?></span>
    <?php 
      if(!empty($rows[$i+1])){ 
    	print '<span>';  
        print $rows[$i+1]; 
        print '</span>';
      }  
    ?>
    <?php 
      if(!empty($rows[$i+2])){ 
    	print '<span>';  
        print $rows[$i+2]; 
        print '</span>';
      }  
    ?>
    <div class="bookself"></div>
  </div>

<?php 
$i = $i+2;
}    
?>


<?php //foreach ($rows as $id => $row): ?>
  <!--<div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php //print $row; ?>
  </div>-->
<?php //endforeach; ?>
<style>
.view-hrm-magazine .views-row{
	    float: left;
    width: 100%;
    position: relative;
    margin-top: 47px;
}

.view-hrm-magazine .views-row span{
	float: left;
	width: 33%;
	}

.view-hrm-magazine .views-row span img{
	box-shadow: -4px 10px 10px #000;
}
	

.view-hrm-magazine .bookself{
 background: rgba(0, 0, 0, 0) url("sites/all/themes/hrmasia/images/bookshelf.png") no-repeat scroll 0 0;
     bottom: -278px;
    height: 364px;
    left: -60px;
    position: absolute;
    width: 800px;
}
.view-id-hrm_magazine{
  float: left;
    position: relative;
}

.view-id-hrm_magazine .item-list{
   bottom: -130px;
    position: absolute;
}

</style>
