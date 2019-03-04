#include <stdio.h>
#include <limits.h>
int main(void)
{
	int i = 0;
	while (i < INT_MAX) {
    	printf("\a\n");
		i ++;
	}
    return 0;
}
