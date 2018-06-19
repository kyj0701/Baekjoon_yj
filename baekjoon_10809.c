#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[101];

	scanf("%s", s);

	int l = strlen(s);
	char a = 'a';

	for(int i = 0; i < 26; i++) {
		for (int j = 0; j < l; j++) {
			if (s[j] == a) {
				printf("%d ", j);
				a++;
				break;
			} else if (s[j] != a && j == l - 1) {
				printf("-1 ");
				a++;
			}
		}
	}

	return 0;
}