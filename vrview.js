import * as THREE from './three/three.module.js';

import { XRControllerModelFactory } from './three/jsm/webxr/XRControllerModelFactory.js';
import { VRButtonIcon } from './three/jsm/webxr/VRButtonIcon.js';
import { HTMLMesh } from './three/jsm/interactive/HTMLMesh.js';
import { InteractiveGroup } from './three/jsm/interactive/InteractiveGroup.js';
import { GUI } from './three/jsm/libs/lil-gui.module.min.js';

var camera, scene, renderer, container;
var planeLeft, planeRight;
var gui, gui_mesh;
var param_changed = false;

var textures;

var beam;
const beam_color = 0xffffff;
const beam_hilight_color = 0x222222;

// GUI
const parameters = {
  view:      0,
  distance:  0.8,
  scale:     1.0,
  shift_hor: 0.0,
  shift_ver: 0.0,
  parallax:  0.0
};

//
// Main
//
function vrView() {
  // Scene
  scene = new THREE.Scene();

  // Camera
  camera = new THREE.PerspectiveCamera( 70, window.innerWidth / window.innerHeight, 0.01, 1000 );
  camera.layers.enable( 1 );

  // Light
  const light = new THREE.PointLight( 0xffffff, 4, 1, 0);
  light.position.set( 0, 0, 0 );
  scene.add( light );

  // Renderer
  renderer = new THREE.WebGLRenderer( { antialias: true } );
  renderer.setPixelRatio( window.devicePixelRatio );
  renderer.setSize( window.innerWidth, window.innerHeight);

  renderer.xr.enabled = true;
  renderer.xr.setReferenceSpaceType( 'local' );
  renderer.xr.setFramebufferScaleFactor( 4.0 );

  // XR session start 
  renderer.xr.addEventListener( 'sessionstart', function ( event ) {
    container = document.createElement( 'div' );
    container.appendChild( renderer.domElement );					
    document.body.appendChild( container );

    renderer.setSize( window.innerWidth, window.innerHeight );
    renderer.setAnimationLoop( render );
  } );
  
  // XR session end
  renderer.xr.addEventListener( 'sessionend', function ( event ) {
    renderer.setAnimationLoop(null);
    container.remove();
  } );

  // VR Button
  let vrButton = VRButtonIcon.createButton( renderer );
  let vr_cont = document.getElementById('vr_button'); //  TODO: Replace with ''
  if (vr_cont.firstChild) {
      vr_cont.firstChild.remove()
  }   
  vr_cont.appendChild( vrButton );

  // Controller
  initController();

  // Prepare projection objects
  prepareObjects();

  // GUI
  gui = new GUI( { width: 350} );
  gui.title( "Settings" );
  gui.add( parameters, 'view', 0, images.length-1, 1 ).name( 'View' ).onFinishChange( onChangeView );
  gui.add( parameters, 'scale', 0.5, 5.0, 0.01 ).name( 'Zoom' ).onChange( onChangeScale );
  gui.add( parameters, 'shift_hor', -0.7, 0.7, 0.01 ).name( 'Horisontal position' ).onChange( onChangeShiftHor );
  gui.add( parameters, 'shift_ver', -0.7, 0.7, 0.01 ).name( 'Vertical position' ).onChange( onChangeShiftVer );
  gui.add( parameters, 'parallax', 0.0, 0.2, 0.001 ).name( 'Parallax' ).onChange( onChangeStereo );
  gui.add( gui.reset(), 'reset' ).name( 'Reset' );
  gui.domElement.style.visibility = 'hidden';

  const group = new InteractiveGroup( renderer, camera );
  scene.add( group );

  // GUI position
  gui_mesh = new HTMLMesh( gui.domElement );
  gui_mesh.rotation.x = -Math.PI / 9;
  gui_mesh.position.y = -0.36;
  gui_mesh.position.z = -0.6;
  group.add( gui_mesh );
  gui_mesh.visible = false;

  window.addEventListener( 'resize', onWindowResize );
}

//
// Prepare scene
//
function prepareObjects()
{
  if( proj == Projection.VR180 ) {
      console.log('VR180 is not supported yet');
    return false;
  } else if( proj == Projection.VR360 ) {
      console.log('VR360 is not supported yet');
    return false;
  }

  // Planes
  const plane_geometry = new THREE.PlaneGeometry( 1, 1 );
  textures = getTexturesFromAtlasFile( images );

  // Materials
  const materials = [];
  for ( let i = 0; i < 2; i ++ ) {       
    materials[i] = new THREE.MeshBasicMaterial( { map: textures[0][i] } );
    materials[i].side = THREE.DoubleSide;
  }

  // Left
  planeLeft = new THREE.Mesh( plane_geometry, materials[0]);
  scene.add( planeLeft );
  planeLeft.layers.set( 1 );
  planeLeft.translateZ(-0.8);
  planeLeft.translateX(-0.06);

  // Right
  planeRight = new THREE.Mesh( plane_geometry, materials[1]);
  scene.add( planeRight );
  planeRight.layers.set( 2 );
  planeRight.translateZ(-0.8);
  planeRight.translateX(0.06);

  return true;
}

//
// Get textures from atlas file
//
function getTexturesFromAtlasFile( images ) {

  const loader = new THREE.ImageLoader();
  let textures = [];
  for( let i=0; i<images.length; i++) {
    const image_url = images_dir + images[i];
    textures[i] = [];
    textures[i][0] = new THREE.Texture();
    textures[i][1] = new THREE.Texture();

    loader.load( image_url, function ( imageObj ) {
      let canvas, context;
      const tileWidth = imageObj.height;

      for ( let j = 0; j < 2; j++ ) {
        canvas = document.createElement( 'canvas' );
        context = canvas.getContext( '2d' );
        canvas.height = tileWidth;
        canvas.width = tileWidth;
        context.drawImage( imageObj, tileWidth * j, 0, tileWidth, tileWidth, 0, 0, tileWidth, tileWidth );

        textures[i][j].colorSpace = THREE.SRGBColorSpace;
        textures[i][j].image = canvas;
        textures[i][j].needsUpdate = true;
      }
    });
  }

  return textures;
}

//
// onWindowResize
//
function onWindowResize() {
  camera.aspect = window.innerWidth / window.innerHeight;
  camera.updateProjectionMatrix();
  renderer.setSize( window.innerWidth, window.innerHeight );
}

//
// Render
//
function render() {
  renderer.render( scene, camera );
}

//
// GUI changes
//
function onChangeScale() {
  param_changed = true;
  planeLeft.scale.setScalar( parameters.scale );
  planeRight.scale.setScalar( parameters.scale );
}

function onChangeShiftHor() {
  param_changed = true;
  planeLeft.position.setX( parameters.shift_hor );
  planeRight.position.setX( parameters.shift_hor );
}

function onChangeShiftVer() {
  param_changed = true;
  planeLeft.position.setY( parameters.shift_ver );
  planeRight.position.setY( parameters.shift_ver );
}

function onChangeStereo() {
  param_changed = true;
  planeLeft.position.setX( -parameters.parallax );
  planeRight.position.setX( parameters.parallax );
}

function onChangeView(view) {
  param_changed = true;

  planeLeft.material.map = textures[view][0];
  planeLeft.material.needsUpdate = true;

  planeRight.material.map = textures[view][1];
  planeRight.material.needsUpdate = true;
}

//
// Init controller
//
function initController()
{
  const controller = renderer.xr.getController( 0 );

  // Grip
  const controllerModelFactory = new XRControllerModelFactory();
  const grip = renderer.xr.getControllerGrip( 0 );
  grip.add( controllerModelFactory.createControllerModel( grip ) );
  scene.add( grip );

  // Beam
  const beam_geom = new THREE.CylinderGeometry( 0.002, 0.004, 1, 16, 1, true);

  // Alpha
  const textureLoader = new THREE.TextureLoader();
  const alpha = textureLoader.load('./data/images/textures/beam_alpha.png');
  const beam_mat = new THREE.MeshStandardMaterial({ transparent: true,
                                                    alphaMap:alpha,
                                                    lightMapIntensity:0,
                                                    opacity: 0.8,
                                                    color: 0xffffff,
                                                    // emissive: 0xffffff
                                                    alphaTest:0.01 });
  beam = new THREE.Mesh(beam_geom, beam_mat);
  beam.name = 'beam';
  beam.receiveShadow = false;

  // Alight beam to grip
  beam.rotateX(Math.PI / 2);
  beam.translateY(-0.5);
  controller.add(beam);

  controller.addEventListener( 'selectstart', onSelectStart );
  controller.addEventListener( 'selectend', onSelectEnd );

  scene.add( controller );
}

//
//  Controller events
//
function onSelectStart( event )
{
  // Hilight beam
  const controller = event.target;
  let beam = controller.getObjectByName( 'beam' );
  beam.material.color.set(beam_hilight_color);
  beam.material.emissive.g = 0.5;

  param_changed = false;
}

function onSelectEnd( event )
{
  // Dehilight beam
  const controller = event.target;
  beam = controller.getObjectByName( 'beam' );
  beam.material.color.set(beam_color);
  beam.material.emissive.g = 0;

  if(param_changed)
  {
    param_changed = false;
    return;
  }

  gui_mesh.visible = !gui_mesh.visible;
}

// Make run() global
window.vrView = vrView;