Before using the library, please read licence.md file


ofxFEngine3DCore //////////

This library contains additional 3D classes for openFrameworks, ofxFEngineFreeCam 
is adjusted in such a way that 3D coordinate systems can be used in the "right" XYZ 
order (Z controling height of the environment). This makes it easier 
and more intuitive to navigate and modify 3D environments in OpenFrameworks.


Compatibility //////////

Library is compatible with OF0071 although it should also work with OF0072.
Library was tested to work on windows 7, code::blocks IDE, in principle
it should be easy to adapt it to Linux or MacOS.


Implementation //////////

To get openframeworks go to 
http://www.openframeworks.cc/download/

First try and analyze the example that is provided with the library in 
ofxFEngine3DCore/examples/

To use library in your OF projects, under code::blocks, press right on your
project, select "Add Files Recursively", pick ofxFEngine3DCore/src folder.
Manage library Source and Header files as you like in code::blocks project.
Press right mouse button on your project again and choose "Build Options".
Under "Search directories" add ofxFEngine3DCore/src folder. Make sure the paths
are correct. Include "ofxFEngine3DCore.h" in your projects class and that is it.


Good luck!


F_Engine Libraries //////////

F_Engine libraries are developed by Matas Ubarevicius and contains 
some basic, lightweight classes for handling 3D scenes.

More info can be found at http://fucture.org