 <div class="jcarousel-wrapper"> 
	<div class="jcarousel">
		<ul>
			<?php foreach($items as $item):
				  print '<li>'.l($item['img'],$item['itemlink'],array('html'=>TRUE)).'</li>';
				endforeach;
			?>
		</ul>	
	</div>
	<div>
		<a href="#" class="jcarousel-control-prev">&lsaquo;</a>
		<a href="#" class="jcarousel-control-next">&rsaquo;</a>
	</div>
</div>
			