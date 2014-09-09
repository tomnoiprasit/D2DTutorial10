#include "AnObject.h"

AnObject::AnObject() {
	nX = 0;
	nY = 0;
	nWidth = 50;
	nHeight = 50;
}
AnObject::~AnObject() {

}
int AnObject::GetX() {
	return nX;
}
int AnObject::GetY() {
	return nY;
}
int AnObject::GetWidth() {
	return nWidth;
}
int AnObject::GetHeight() {
	return nHeight;
}
void AnObject::SetPosition(int a, int b) {
	nX = a;
	nY = b;
}