//
// Video control
//
function switchVideo()
{
  if (video.paused)
  {
    if ( navigator.mediaDevices && navigator.mediaDevices.getUserMedia ) {
      const constraints = { video: { width: 1280, height: 720, facingMode: 'user' } };

      navigator.mediaDevices.getUserMedia( constraints ).then( function ( stream ) {
        video.srcObject = stream;
      } ).catch( function ( error ) {
        console.error( 'Unable to access the camera/webcam.', error );
      } );
    } else {
      console.error( 'MediaDevices interface not available.' );
    }

    video.play();
    video.style.visibility = 'visible';

  } else {
    video.style.visibility = 'hidden';
    video.srcObject.getTracks()[0].stop();
    video.srcObject = null;
  }
}

document.getElementById("video_button").onclick = switchVideo;

