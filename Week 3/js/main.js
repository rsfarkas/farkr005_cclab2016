var app = app || {};

app.main = (function(){

  var attachEvents = function(){

    $('#search-button').off('click').on('click', function(){
      loadData($('#search-box').val());
    });

    $('#search-box').keypress(function(e){
      if(e.keyCode == 13){
        loadData($('#search-box').val());
      }
    });
  };

  var loadData = function(query){
    $.ajax({
      url: 'https://api.spotify.com/v1/search',
      data: {
        q: query,
        type: 'track'
      },
      success: function (response) {
        var results = response.tracks
        getAudio(results);
      },
    });
  };

  var getAudio = function(results){
    if (results.items.length > 0){
      var track = results.items[0];
      updateSource(track);
    } else if (results.items.length == 0){
      var error = "No track found. Please try again!"
      $('input[name=search]').val(error);
    }
  };

  var updateSource = function(track) {
    var display = ('Playing: ' + track.name + '   By: ' + track.artists[0].name);
    $('#search-box placeholder').replaceWith(display);
    $('input[name=search]').val(display);
    var audio =  $('#player')[0]
    var source = $('#spotifyAudio')[0]
    source.src = track.preview_url;
    audio.load();
    audio.play();
  };

  var init = function(){
    attachEvents();
  };

  return{
    init:init
  };
})();

window.addEventListener('DOMContentLoaded', app.main.init);


// http://stackoverflow.com/questions/10792163/change-audio-src-with-javascript
