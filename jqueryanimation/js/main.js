
$(document).ready(function(){
	$('img').click(function() {
  		$('img').fadeOut("slow");
  		$('img').replaceWith('<div id="countdown">hayyyy</div>');
	});
});



	var clock = $('.clock').FlipClock(3600 * 24 * 3, {
		clockFace: 'DailyCounter',
		countdown: true
	});
