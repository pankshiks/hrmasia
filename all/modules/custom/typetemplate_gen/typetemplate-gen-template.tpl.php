<?php
print "test";
print_r($field_type);
?>
<style>
.gridster ul{
	/*width: 100% !important;*/
}
</style>
<div class="gridster ready" style="width: 100%;">
    <ul style="width: 100% !important; position: relative;">
  <?php
  $i = 1;
    foreach($field_type as $key=>$value){
    	if($i>3){
    		$k= 1;
    		$j= 2;
    	} else{
    		$k = $i;
    		$j= $i;
    	}
  ?> 
      <li class="gs-w" data-row="<?php print rand(1,3); ?>" data-col="<?php print rand(1,2); ?>" data-sizex="<?php print rand(1,3); ?>" data-sizey="<?php print rand(1,3); ?>">
      	<?php print $key ?>
      	<span class="gs-resize-handle gs-resize-handle-both"></span>
  	  </li>
  	<?php
  	$i++;
    	}
    ?>
      <!--<li class="gs-w" data-row="1" data-col="1" data-sizex="2" data-sizey="2">0<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="1" data-col="3" data-sizex="1" data-sizey="2">1<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="1" data-col="4" data-sizex="1" data-sizey="1">2<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="3" data-col="2" data-sizex="3" data-sizey="1">3<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="4" data-col="1" data-sizex="1" data-sizey="1">4<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="3" data-col="1" data-sizex="1" data-sizey="1">5<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="4" data-col="2" data-sizex="1" data-sizey="1">6<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="5" data-col="2" data-sizex="1" data-sizey="1">7<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="4" data-col="4" data-sizex="1" data-sizey="1">8<span class="gs-resize-handle gs-resize-handle-both"></span></li>
      <li class="gs-w" data-row="1" data-col="5" data-sizex="1" data-sizey="3">9<span class="gs-resize-handle gs-resize-handle-both"></span></li>-->
    </ul>
  </div>

<script type="text/javascript">
  function getRandomInt(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
  }
</script>

<script type="text/javascript">
  var gridster;

  jQuery(function(){
    gridster = jQuery(".gridster ul").gridster({
          widget_base_dimensions: [100, 55],
          widget_margins: [5, 5],
          helper: 'clone',
          resize: {
            enabled: true
          }
        }).data('gridster');


        jQuery('.js-resize-random').on('click', function() {
            gridster.resize_widget(gridster.jQuerywidgets.eq(getRandomInt(0, 9)),
                getRandomInt(1, 4), getRandomInt(1, 4))
        });

      });
    </script>