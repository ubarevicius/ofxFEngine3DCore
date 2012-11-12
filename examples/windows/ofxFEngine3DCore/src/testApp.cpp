#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{

    ofBackground( 10, 10, 10);

    // setup some OF and OPENGL drawing methods, go to the library class to change these
    // default settings
    environment.setup();

    light.setPointLight();
    light.setPosition(2000,2000,2000);
    light.enable();

    //sviesa2.enable();

    // Set camera speed and position
    camera.setSpeed(10);
    camera.setPosition(1500,1500,500);

    // Set camera slow down rate after you release the button
    // Values between 0 and 1 (0 - stops immediately, 1 - continues moving at the same speed)
    camera.setDecelerationMove(0.95);
    camera.setDecelerationRotate(0.9);

    // Set camera controls
    // Defaults are: w - forward, s - backward, a - left, d - right, u - up, j - down
    camera.setButtonsMovement('w', 's', 'a', 'd', 'u', 'j');

}

//--------------------------------------------------------------
void testApp::update()
{

    camera.update();

}

//--------------------------------------------------------------
void testApp::draw()
{

    camera.begin();

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            ofBox(i*300,j*300,200,200);
        }
    }

    camera.end();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void testApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y)
{

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo)
{

}
