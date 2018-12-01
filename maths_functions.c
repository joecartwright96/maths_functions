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
int mod(int a, int b) {
	return a % b;
}	

int main() {

	printf("answer = %i\n", mod(15,4));
	return 0;
}
