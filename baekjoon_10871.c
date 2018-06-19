#include <stdio.h>

int main(void)
{
	int N, X;
	int j = 0;
	int a[10000];
	int b[10000 ];

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);

		if (a[i] < X)
			b[j++] = a[i];
	}

	for (int i = 0; i < j; i++) {
		printf("%d ", b[i]);
	}

	return 0;
}