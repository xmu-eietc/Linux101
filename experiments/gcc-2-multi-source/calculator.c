#include "include/calculator.h"

int sum(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int divisor) {
	//除法考虑分母为0的情况
	if(divisor==0){
		printf("Error!divisor is negative！");
		return 99999999;
	}
	return x / divisor;
}
