#include "include/calculator.h"
#include <stdio.h>
#include "calculator.c"
int main(void) {
	int x, y;
	
	x = 2;
	y = 3;

	printf("%d + %d = %d\n", x, y, sum(2, 3));

	return 0;
}
