#include <stdio.h>
#include <math.h>

typedef long long ll;

int main(void)
{
	ll min, max;
	int cnt = 0;
	scanf("%lld %lld", &min, &max);

	for(ll i = 1; i <= (int)sqrt(max); i++) {
		if ((i * i >= min) && (i * i <= max))
			cnt++;
	}

	printf("%lld\n", max - min + 1 - cnt);

	return 0;
}