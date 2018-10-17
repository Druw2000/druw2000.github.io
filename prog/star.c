i#nclude <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int readBuffer();
int checkBuffer();
int printBuffer();
int printTest();

int size;
char buffer[128][128];

int main() {
	//printf("Size ? ");
	//scanf("%d", &size);
	size=41;
	if (size >= 128 || size <= 0) {
		printf("Size must be less than 128 and greater than 0!");
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
	return 0;
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
			if (buffer[y][x] == '*') {
				printf(ANSI_COLOR_CYAN "%c ", buffer[y][x]);
				printf(ANSI_COLOR_RESET);
			}
			else {
				printf("%c ", buffer[y][x]);
			}
		}
		printf("\n");
	}
	return 0;
}
