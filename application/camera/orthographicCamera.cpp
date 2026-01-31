#include "orthographicCamera.h"


orthgraphicCamera::orthgraphicCamera(float l, float r, float t, float b, float n, float f) {
	mLeft = l;
	mRighr = r;
	mTop = t;
	mBottom = b;
	mNear = n;
	mFar = f;
}
orthgraphicCamera::~orthgraphicCamera() {

}

glm::mat4 orthgraphicCamera::getProjectionMatrix() {
	return glm::ortho(mLeft, mRighr, mBottom, mTop, mNear, mFar);
}
