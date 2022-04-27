#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//problem set 1
//task1
/*
int main()
{
	int n;
	printf("enter number :");
	scanf("%d", &n);
	int i, j, k;
	for (int i = 1; i <= n; i++) {
		for (int k = n - i; k > 0; k--) {
			printf  (" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("#");
		}
		printf("\n");
	}
}
*/
//task 2
int main()
{
	int n;
	printf("Enter Number :");
	scanf("%d", &n);
for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= n - i; j++) {
		printf(" ");
	}
	for (int j = 1; j <= i; j++) {
		printf("#");
	}
	for (int j = 1; j <= 2; j++) {
		printf(" ");
	}
	for (int j = 1; j <= i; j++) {
		printf("#");
	}
	printf("\n");
}

	return 0;
}
