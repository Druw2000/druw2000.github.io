#include <iostream>
#include <fstream>
#define PI 3.14159265

using namespace std;

static const char* HOME;

int main () {
	HOME = getenv("HOME");	
	cout << "working from " << HOME << endl;
	ifstream file;
	file.open(string(HOME) + "/sine.txt", std::ios::binary);
	cout << "output of sine.txt" << endl;
	string line;
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line;
		}
		file.close();
	} else {
		cout << "unable to open";
	}
	cout << endl;
	return 0;
}
