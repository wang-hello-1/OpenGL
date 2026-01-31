#include "cameraControl.h"
#include <iostream>

cameraControl::cameraControl() {

}
cameraControl::~cameraControl() {

}
void cameraControl::onMouse(int button, int action, int xpos, int ypos) {

}
void cameraControl::onCursor(double xpos, double ypos) {

}
void cameraControl::onKey(int key, int action, int mods) {
	if (action == GLFW_REPEAT)return;
	bool pressed = action == GLFW_PRESS ? true : false;
	mKeyMap[key] = pressed;
	for (auto pair : mKeyMap) {
		std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
	}
}

void cameraControl::updata()
{

}
