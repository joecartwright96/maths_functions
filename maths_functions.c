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

	printf("answer = %i\n", add(1,3));
	return 0;
}
