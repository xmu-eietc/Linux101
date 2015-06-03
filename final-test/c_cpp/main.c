#include <stdio.h>

#include "include/my_stack.h"

#define length 10

//int num=0,mystack[length];

int main(void) {
	int x;	

        while ( ! stack_is_full() ) {
		scanf("%d", &x);
		stack_push(x);
	}
	

	while ( !stack_is_empty() ) {
		x = stack_pop();

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
