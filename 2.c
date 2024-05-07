#include<stdio.h>

void printNumbers(int n) {
	for(int i = 0; i<=n;i++) {
		for(int j=(n-i)/2; j>0; j--){
			printf(" ");
		}
		for(int k = 1; k<=i; k++) {
			printf("%i",k);
		}
		printf("1\n");
	}
}

int main() {
	int number = 5;
	printNumbers(number);
	return 0;
}
