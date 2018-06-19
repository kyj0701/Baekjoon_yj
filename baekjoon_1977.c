#include <stdio.h>
#include <math.h>

int main(void) 
{
	int M, N;
	int sum = 0;
	int n;
	scanf("%d", &M);
	scanf("%d", &N);

	for(int i = (int)sqrt(N); i >= 1; i--) {
		if (((i * i) >= M) && ((i * i) <= N)) {
			sum += (i * i);
			n = (i * i); 
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d\n", sum, n);

	return 0;
}

// 삼항연산자로 min함수 구현 권장.