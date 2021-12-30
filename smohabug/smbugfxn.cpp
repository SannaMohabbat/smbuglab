#include "bugclass.h"
Bug::Bug()
{
	x=0;
	y=0;
}
void Bug::setbug(int x, int y)
{
	this->x = x;
	this->y= y;	
}
int Bug::getx()
{
	return x;
}
int Bug::gety()
{
	return y;
}
void Bug::increasex()
{
	x+=10;
}
void Bug::decreasex()
{
	x-=10;
}
void Bug::increasey()
{
	y+=10;
}
void Bug::decreasey()
{
	y-=10;
}
void Bug::print_o(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim)
{
	//this for loop makes bug move right 10x
		for (int i = 1; i <= 10; i++)
	{ 
		x+=10; 
		anim.add(bugsypic, x, .25*HEIGHT);
		anim.frame();
	}
	//this for loop makes bug move down 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move left 10x
	for (int i = 1; i <= 10; i++)
	{ 
		x-=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	 //this for loop makes bug move up 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y-=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
}
void Bug::print_n(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim)
{
	//this for loop makes bug move down 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move up 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y-=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move right 5x
	for (int i = 1; i <= 5; i++)
	{ 
		x+=10; 
		anim.add(bugsypic, getx(), .25*HEIGHT+gety());
		anim.frame();
	}
	//this for loop makes bug move down 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move right 5x
	for (int i = 1; i <= 5; i++)
	{ 
		x+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move up 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y-=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
}
void Bug::print_h(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim)
{
	//this for loop makes bug move down 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move up 5x
	for (int i = 1; i <= 5; i++)
	{ 
		y-=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move right 5x
	for (int i = 1; i <= 5; i++)
	{ 
		x+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move down 5x
	for (int i = 1; i <= 5; i++)
	{ 
		y+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
}
void Bug::print_t(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim)
{
	//this for loop makes bug move right 10x
	for (int i = 1; i <= 10; i++)
	{ 
		x+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move left 5x
	for (int i = 1; i <= 5; i++)
	{ 
		x-=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move down 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
}
void Bug::print_i(const int HEIGHT, const int WIDTH, const int SCALE, Picture bugsypic, Animation &anim)
{
	//this for loop makes bug move up 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y-=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
	//this for loop makes bug move up 10x
	for (int i = 1; i <= 10; i++)
	{ 
		y+=10; 
		anim.add(bugsypic, x, .25*HEIGHT+y);
		anim.frame();
	}
}
