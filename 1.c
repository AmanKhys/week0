#include<stdio.h>

void printRecurssion(char str[], int *count) {
	if(*count<7) {
		*count = *count + 1;
		printf("%s %i\n",str, *count);
		printRecurssion(str, count);
	}
}

int main() {
	int count = 0;
	printRecurssion("crossroads", &count);
	return 0;
}
