// Write a function which calls itself a determined number of times
//and useful when I dont wont to write a loop
// Output symbols
//? prompt
//: statement
//= condition
#include <stdio.h>
#include <stdlib.h>

int loop(int i, int j) {
	if (i == j) {
		return 0;
	}
	return loop(i+1, j);
}

int main (int argc, char *argv[]) {
	printf("%s\n", argv[argc-1]);
	printf("0 or 1 = %d", loop(0, 20));
	return 0;
}
