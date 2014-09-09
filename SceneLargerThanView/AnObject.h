#ifndef __VIEW_AN_OBJECT_H__
#define __VIEW_AN_OBJECT_H__
class AnObject {
public:
	AnObject();
	~AnObject();
	int GetX();
	int GetY();
	int GetWidth();
	int GetHeight();
	void SetPosition(int, int);
private:
	int nX;
	int nY;
	int nWidth;
	int nHeight;
};
#endif