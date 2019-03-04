// int* i;	Create pointer which refers to int
// i = &a[0];	'i' points to the first element of 'a[]'
// *i = 4	Set 'a[0]' to '4' through pointer 'i'
// int x = *i;	'x' is set to 'a[0]' through 'i'
#include <stdio.h>

int main() {
	char buffer[256];
	for (int i = 0; i < 256; i ++) {
		buffer[i] = '#';
	}
	for (int i = 0; i < 256; i ++) {
		printf("%c", buffer[i]);
		if (i % 32 == 0 && i != 0) {
			printf("\n");;
		}
	}
	return 0;
}
