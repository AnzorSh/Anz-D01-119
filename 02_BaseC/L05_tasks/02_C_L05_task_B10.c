#include <stdio.h>

/*
Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.
    Input format
Целое число
    Output format
YES или NO
*/

int main() {
	int a, c1, c2, nok=0;
	scanf("%d", &a);
	while (a > 0) {
		c1 = a % 10;
		c2 = a / 10 % 10;
		a = a / 10;
		if (c1 <= c2)
			nok=1;
	}
	if ((nok == 0) && (a == 0))
		printf("YES");
	else
		printf("NO");
	return 0;
}