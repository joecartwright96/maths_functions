#include <stdio.h>

int add(int a, int b) { 
	return(a + b);
}
int subtract(int a, int b) {
	return a - b;
}
int divide(int a, int b) {
	return a / b;
}
int multiply(int a, int b) {
	return a * b;
}

int main() {

	printf("answer = %i\n", add(15,4));
	return 0;

	// add extra functionality here 
}
