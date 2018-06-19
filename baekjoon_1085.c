#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, w, h;
	int tmp;
	// int min;
	int a[4];

	scanf("%d %d %d %d", &x, &y, &w, &h);

	a[0] = w - x;
	a[1] = h - y;
	a[2] = y;
	a[3] = x;

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	// for (int i = 0; i < 3; i++) {
	// 	if (a[i] <= a[i+1])
	// 		min = a[i];
	// 	else
	// 		min = a[i+1];
	// }

	printf("%d\n", a[0]);
	// printf("%d\n", min);
	return 0;
}