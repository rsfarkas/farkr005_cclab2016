
$(document).ready(function(){
	$('img').click(function() {
  		$('img').fadeOut("slow");
  		// $('img').replaceWith('<div id="clock"></div>');
	});
});



	// var clock = $('.clock').FlipClock(743000 * 24 * 3, {
	// 	clockFace: 'DailyCounter',
	// 	countdown: true
	// });
  

  var clock = $('.clock').FlipClock(new Date(2018,8,30).getTime()/1000 - new Date().getTime()/1000, {
            clockFace: 'DailyCounter',
            countdown: true
        });

