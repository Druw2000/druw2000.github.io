// int* i;		Create pointer which refers to int
// i = &a[0];	'i' points to the first element of 'a[]'
// *i = 4		Set 'a[0]' to '4' through pointer 'i'
// int x = *i;	'x' is set to 'a[0]' through 'i'
#include <iostream>

int main() {
	char* buffer = new char[256];
	cout << buffer.length << endl;
	for (int i = 0; i < 256; i ++) {
		buffer[i] = "#";
	}
	cout << &buffer << endl;
	return 0;
}
