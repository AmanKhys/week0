#include<stdio.h>

int compStr(char strr1[],char strr2[], int size1, int size2) {
	printf("size of two strings: %i, %i \n",size1, size2);
	printf("two strings are %s AND %s \n", strr1, strr2);
	if(size1 != size2) return 0;
	for(int i=0; i<size1; i++) {
		if(strr1[i]!= strr2[i]) return 0;
	}
	return 1;
}

int main() {
	char str1[] = "hello";
	char str2[] = "hewlo";
	int size1 = sizeof(str1);
	int size2 = sizeof(str2);

	int check = compStr(str1, str2, size1, size2);
	if (check == 1) printf("two strings are the same");
	else printf("two strings are not the same");
	return 0;
}
