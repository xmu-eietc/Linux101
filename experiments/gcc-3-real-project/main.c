#include <stdio.h>

#include "include/calculator.h"

int main(void) {
	int x, y;
	
	x = 2;
	y = 3;

	printf("%d - %d = %d\n", x, y, subtract(2, 3));

	printf("%d / %d = %.2f\n", x, y,divide(2, 3));
	
	printf("%d / %d = %.2f\n", x, y, divide(2, 0));
	return 0;
}
