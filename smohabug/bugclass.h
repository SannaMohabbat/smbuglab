#ifndef BUGCLASS_H
#define BUGCLASS_H
#include "animation.h"
#include "picture.h"
class Bug
{
private:
	int x;
	int y;
public:
	Bug();
	void setbug(int x, int y);
	int getx();
	int gety();
	void increasex();
	void decreasex();
	void increasey();
	void decreasey();
	void print_o(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim);
	void print_n(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim);
	void print_h(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim);
	void print_t(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim);
	void print_i(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim);
};
#endif
