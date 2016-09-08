
$(document).ready(function(){
	$('img').click(function() {
  		$('img').fadeOut("slow");
  		 		$('#clock').addClass("clock");
  		$('img').replaceWith('<div id="clock"></div>');
	});
});



	var clock = $('.clock').FlipClock(743000 * 24 * 3, {
		clockFace: 'DailyCounter',
		countdown: true
	});
