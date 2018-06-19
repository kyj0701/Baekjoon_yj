#include <stdio.h>
#include <string.h>

void elim(char *s, char c);

int main(void)
{
	char s[1000000000];
	int a[10] = {0,};
	int A, B, C;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	sprintf(s, "%d", A * B * C);

	for(int i = 0; *s != '\0'; i++) {
		if(s[i] == '0') {
			a[0]++;
			elim(s,'0');
		}
		else if(s[i] == '1') {
			a[1]++;
			elim(s,'1');
		}
		else if(s[i] == '2') {
			a[2]++;
			elim(s,'2');
		}
		else if(s[i] == '3') {
			a[3]++;
			elim(s,'3');
		}
		else if(s[i] == '4') {
			a[4]++;
			elim(s,'4');
		}
		else if(s[i] == '5') {
			a[5]++;
			elim(s,'5');
		}
		else if(s[i] == '6') {
			a[6]++;
			elim(s,'6');
		}
		else if(s[i] == '7') {
			a[7]++;
			elim(s,'7');
		}
		else if(s[i] == '8') {
			a[8]++;
			elim(s,'8');
		}
		else if(s[i] == '9') {
			a[9]++;
			elim(s,'9');
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	return 0;
}

void elim(char *str, char ch)
{
	for(; *str != '\0'; str++) {
		if (*str == ch) {
			strcpy(str, str + 1);
			str--;
		}
	}
}