#include <stdio.h>

int main(void)
{
	int n;
	int res = 0;

	scanf("%d", &n);

	while(1) {
		if (n % 5 == 0) {
			printf("%d\n", n/5 + res);
			break;
		}
		else if (n <= 0) {
			printf("-1\n");
			break;
		}
		n -= 3;
		res++;
	}
	return 0;
}