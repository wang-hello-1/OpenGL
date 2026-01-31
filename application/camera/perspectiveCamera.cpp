#include "perspectiveCamera.h"


perspectiveCamera::perspectiveCamera(float f, float a, float n, float far)
{
	mFovy = f;
	mAspect = a;
	mNear = n;
	mFar = far;
}

perspectiveCamera::~perspectiveCamera()
{
}

glm::mat4 perspectiveCamera::getProjectionMatrix() {
	return glm::perspective(glm::radians(mFovy), mAspect, mNear, mFar);
}
