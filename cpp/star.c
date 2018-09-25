#include <stdio.h>
#include <stdlib.h>

int readBuffer();
int checkBuffer();
int printBuffer();
int printTest();

const int size;
char buffer[40][40];

int main() {
	printf("Size ? ");
	scanf("%d", &size);
	if (size >= 40 || size <= 0) {
		printf("Size must be less than 40 and greater than 0!");
		// Trailing newline
		printf("\r\n");
		return 1;
	}
	for (int y = 0; y < size; y++) {
		for(int x = 0; x < size; x++) {
			buffer[y][x] = ' ';
		}
	}
	readBuffer();
	printBuffer();
	// Trailing newline
	printf("\r\n");
	return 0;
}
int checkBuffer(int x, int y) {
	if (y == 0 || y == size - 1) {
		int i = 0;
		while (i < size) {
			buffer[y][i] = '*';
			i ++;
		}
		i = 0;
	}
	if (x == 0 || x == size - 1) {
		int i = 0;
		while (i < size) {
			buffer[i][x] = '*';
			i ++;
		}
	}
	if (size - 1 - y == x)
		buffer[y][x] = '*';
	if (x == y)
		buffer[y][x] = '*';
}
int readBuffer() {
	for (int y = 0; y < size; y++) {
		for(int x = 0; x < size; x++) {
			checkBuffer(x, y);
		}
	}
	return 0;
}
int printBuffer() {
	for (int y = 0; y < size; y++) {
		for(int x = 0; x < size; x++) {
			printf("%c ", buffer[y][x]);
		}
		printf("\n");
	}
	return 0;
}
