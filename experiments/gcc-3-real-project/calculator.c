#include "include/calculator.h"
#include "stdio.h"
int sum(int x, int y) {
	return x + y;	
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

double divide(double x, double divisor) {
	if(divisor==0){
	    printf("Error! the divisor is zero! please check.\n");
	    return 99999999;
	}else {
	
	    return x / divisor;
	}
}
