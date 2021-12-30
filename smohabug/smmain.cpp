//g++ -I animation animation/*.cpp basic1buggif.cpp -o ladybug
//animation files in an animation directory
//Program to create virtual a bug climbing a wall.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bugclass.h"
int main()
{   
	//set width and height of gif size
	const int HEIGHT = 500;
	const int WIDTH = 500;
	//set scale of movement
	const int SCALE = 1;
	//create a Picture object named busypic
	Picture bugsypic ("bee20.png");
	std::string exit = "k";
	//string for name
	std::string name;
	//asks user for name
	std::cout << "What is your name? " << " ";
	//inputs users name
	std::cin >> name;
	//greets the user
	std::cout << "Hello " << name << "! ";
	std::string l;
	std::cout<< "do you want to help our bug, bugsy, write a secret message (yes/no): ";
	std::cin>> l;
	if (l == "yes" || "YES" || "Yes")
	{
	while (exit != "n")
	{
	//create a bug object named bugsy
	Bug bugsy;
	//setting rand fxn
	srand(time(0));
	int r = rand()%5+1;
	//create an Animation object named anim
	Animation anim("run.gif", WIDTH, HEIGHT);
	//the for loop will move the bug to the right 10x
	if (r == 1){
		bugsy.print_o(HEIGHT,WIDTH,SCALE, bugsypic, anim);
		bugsy.setbug(200,0);
		bugsy.print_n(HEIGHT,WIDTH,SCALE, bugsypic, anim);
		}	
	//NO
	if (r == 2){
		bugsy.print_n(HEIGHT,WIDTH,SCALE,bugsypic, anim);
		bugsy.setbug(200,0);
		bugsy.print_o(HEIGHT,WIDTH,SCALE,bugsypic, anim);	
		}
	//OH//goes up
	if(r == 3){
		bugsy.print_o(HEIGHT,WIDTH,SCALE,bugsypic, anim);
		bugsy.setbug(200,0);
		bugsy.print_h(HEIGHT,WIDTH,SCALE,bugsypic, anim);
		}
	//IT
	if (r == 4){
		bugsy.setbug(0,50);
		bugsy.print_i(HEIGHT,WIDTH,SCALE,bugsypic, anim);
		bugsy.setbug(50,0);
		bugsy.print_t(HEIGHT,WIDTH,SCALE,bugsypic, anim);
		}
	//TI
	if (r == 5){
	bugsy.print_t(HEIGHT,WIDTH,SCALE,bugsypic, anim);
	bugsy.setbug(200,100);
	bugsy.print_i(HEIGHT,WIDTH,SCALE,bugsypic, anim);
	}
	anim.close();
	system("animate run.gif &");
	std::string o;
	std::cout << "guess the word: " << " ";
	std::cin >> o;
	while (r ==1){
		if (o == "On" || o == "on" || o == "ON")
			{std::cout << "correct!"; std::cout << std::endl;}
				else{std::cout << "incorrect.";std::cout << std::endl;}break;}
	while(r==2){
		if (o == "No" || o == "no" || o == "NO")
			{std::cout << "correct!";std::cout<< std::endl;}
				else{std::cout << "incorrect.";std::cout<< std::endl;}break;}	
	while(r==3){
		if (o == "Oh" || o == "oh" || o == "OH")
			{std::cout << "correct!";std::cout <<std::endl;}
				else{std::cout << "incorrect."; std::cout <<std::endl;}break;}		
	while(r==4){
		if (o == "It" || o == "it" || o == "IT")
			{std::cout << "correct!";std::cout<< std::endl;}
				else{std::cout << "incorrect.";std::cout << std::endl;}break;}		
	while(r==5){
		if (o == "Tis" || o == "ti" || o == "TI")
			{std::cout << "correct!";std::cout<< std::endl;}
				else{std::cout << "incorrect.";std::cout <<endl;}break;}	
	std::cout << "Do you want to repeat (y/n): ";
	std::cin >> exit;
	}}
	return 0;  
}
	
