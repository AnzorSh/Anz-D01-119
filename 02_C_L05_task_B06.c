#include <stdio.h>

/*
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом.
	Input format
Одно целое число
	Output format
Единственное слов: YES или NO
*/

int main() {
	int a, b, c1, c2, res=0;
	scanf("%d", &a);
	while (a > 0) {
		c1 = a % 10;
		b = a / 10;
		c2 = b % 10;
		a = a / 10;
		if (c1 == c2)
		    res=1;
		// printf("%d %d %d\n", c1, c2, res);
	}
	if (res)
	    printf("YES");
	else
	    printf("NO");
	return 0;
}