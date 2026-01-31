#pragma once 
#include "../../glframework/core.h"
#include "camera.h"
#include <map>


class cameraControl {
public:
	cameraControl();
	~cameraControl();
	virtual void onMouse(int button, int action, int xpos, int ypos);
	virtual void onCursor(double xpos, double ypos);
	virtual void onKey(int key, int action, int mods);
	virtual void updata();

	void setCamera(Camera* camera) { mCamera = camera; }
	void setSensitivity(float s) { mSensitivity = s; }
protected:
	bool mLeftMouseDown = false;
	bool mRightMouseDown = false;
	bool mMiddleMouseDown = false;

	float mCurrentX = 0.0f;
	float mCurrentY = 0.0f;
	//灵敏度
	float mSensitivity = 0.2f;

	//记录当前键盘相关按键按下的状态
	std::map<int, bool> mKeyMap;

	Camera* mCamera = nullptr;
};