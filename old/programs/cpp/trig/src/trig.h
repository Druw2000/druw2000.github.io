#include <iostream>
#include <fstream>
#include <string>
// #include <SDL2>

#define PI 3.1415952

class sin {
	void sin(double y, double r);
	void sin(string expr);
	void sin(char y);
}
class cos {	
	void cos(double x, double r);
	void cos(string expr);
	void cos(char x);
}
class tan {
	void tan(double y, double x);
	void tan(string expr);
	void tan(char y);
}
class csc {
	void csc(double r, double y);
	void csc(string expr);
	void csc(char y);
}
class sec {
	void sec(double r, double x);
	void sec(string expr);
	void sec(char y);
}
class cot {
	void cot(double x, double y);
	void cot(string expr);
	void cot(char y);
}
