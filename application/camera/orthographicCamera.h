
#pragma once 
#include "camera.h"

class orthgraphicCamera :public Camera {
public:
	orthgraphicCamera(float l, float r, float t, float b, float n, float f);
	~orthgraphicCamera();

	glm::mat4 getProjectionMatrix() override;

public:
	float mLeft = 0.0f;
	float mRighr = 0.0f;
	float mTop = 0.0f;
	float mBottom = 0.0f;
	float mNear = 0.0f;
	float mFar = 0.0f;
};