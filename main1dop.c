#include <stdio.h>
int main()
{
	int  a, b, c;
	printf("input a ");
	scanf_s("%d", &a);
	printf("input b ");
	scanf_s("%d", &b);
	if (b < 0) {
		printf(" error ");
	};
	if (a < 0) {
		printf(" error ");
	};
	if (b == 0) {
		printf(" error ");
	};
	if (a == 0) {
		printf(" error ");
	};
	if (a > b) {
		while (b != 0) {

			c = a % b;
			a = b;
			b = c;
		}
		printf("NOD %d", a);
	}
	else {
		while (a != 0) {
			c = b % a;
			b = a;
			a = c;
		}
		printf("NOD %d", b);
	}
	return 0;
}
