#include "ofxFEngineEnvironment.h"

ofxFEngineEnvironment::ofxFEngineEnvironment()
{
    //ctor
}

ofxFEngineEnvironment::~ofxFEngineEnvironment()
{
    //dtor
}

void ofxFEngineEnvironment::setup()
{
    ofSetVerticalSync(true);
    ofDisableArbTex();
    glEnable(GL_DEPTH_TEST);
    ofSetWindowTitle("FEngine v001");
}
