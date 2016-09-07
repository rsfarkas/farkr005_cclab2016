
$(document).ready(function(){
	$('img').click(function() {
  		$('img').fadeOut("slow");
  		$('img').replaceWith('<div id="countdown">hayyyy</div>');
	});
});