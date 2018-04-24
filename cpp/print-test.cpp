/* It would be cool to try out ncurses library and line drawing characters
U+2550	═
U+2551	║
U+2554	╔
U+2557	╗
U+255A	╚
U+255D	╝
U+2560	╠
U+2563	╣
U+2566	╦
U+2569	╩
U+256C	╬
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void my_time();
int room();

int main(int argc, char** argv) {
	cout << "Current time (HH|MM|SS): " << __TIME__ << endl;
	cout << "Current time (SS): "; my_time();
	return 0;
}

void my_time() {
	string T = __TIME__;
	cout << "Time is at: " << &T << endl;
	for (int i = 0; i < T.length(); i ++) {
		cout << T[i] << " ";
	}
	cout << endl;
}

int room() {
	return 0;
}
