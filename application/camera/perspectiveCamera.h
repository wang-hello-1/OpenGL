#pragma once 

#include "camera.h"

class perspectiveCamera:public Camera
{
public:
	perspectiveCamera(float f,float a, float n, float far);
	~perspectiveCamera();
	glm::mat4 getProjectionMatrix();
public:
	float mFovy   = 0.0f;
	float mAspect = 0.0f;
	float mNear	  = 0.0f;
	float mFar 	  = 0.0f;
};

