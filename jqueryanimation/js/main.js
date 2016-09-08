var clock = $('.clock').FlipClock(new Date(2018,5,20).getTime()/1000 - new Date().getTime()/1000, {
	clockFace: 'DailyCounter',
	countdown: true
});



$(document).ready(function(){
	$('img').click(function() {
		$('img').fadeOut("slow");
		console.log("not replaced");
		$('img').replaceWith('<img src="img/giphy.gif"><img>');
		console.log("replaced");
	});

// 	$('#img').hover(function(){
// 	$(this).css({width:"110%",height:"110%"});
// })();

$( "#img" ).hover(function() {
  $( this ).css({width:"95%", height:"95%"});
},function(){
    $(this).css({width:"100%",height:"100%"});  
});

	// $('#img').hover(function(){
	// 	$(this).css({width:"110%",height:"110%"});
	// },function(){
	// 	$(this).css({width:"100%",height:"100%"});   
	// })();


});






