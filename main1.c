#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int  N, M;
	printf("input N ");
	scanf("%d", &N);
	printf("input M ");
	scanf("%d", &M);
	if (M < 0) { M = -M; }
	if (N < 0) { N = -N; }
	int i = N - M;
	if (M == 0) {
		printf(" Error ");
	}
	while (i >= M) {
		i = i - M;
	}
	if (i == 0) {
		printf("TRUE");
	}
	else {
		printf("FALSE");
	}
	return 0;
}
