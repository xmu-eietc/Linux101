#include <stdio.h>

int main(void) {
	int x, y;
	
	x = 2;
	y = 3;

	printf("%d + %d = %d\n", x, y, sum(2, 3));
	printf("%d + %d = %d\n", x, y, divide(2, 3));
	printf("%d + %d = %d\n", x, y, divide(2, 0));	

	return 0;
}
