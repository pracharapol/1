#include<stdio.h>
int main() {
	int x;
	printf("Enter Number : ");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int j = x; j >= i; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int j = x; j >= i; j--) {
			printf(" ");
		}
		for (int j = x - 1; j >= i; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	x = x * 4 + 1;
	for (int i = -1; i <= x; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = -1; i <= x; i++) {
		printf("*");
	}
	printf("\n");
	x = (x - 1) / 2 + 1;
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = x; j >= i; j--) {
			printf("*");
		}
		for (int j = x - 1; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}