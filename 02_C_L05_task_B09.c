#include <stdio.h>

/*
Ввести целое число и определить, верно ли, что все его цифры четные.
	Input format
Одно целое число
	Output format
YES или NO
*/

int main() {
	int a, b, z=0;
	scanf("%d", &a);
	while (a > 0) {
		b = a % 10;
		a = a / 10;
        if ((b%2) != 0)
            z=1;
        //printf("%d\n", b);
	}
	if (z) printf("NO");
	else 
	    printf("YES");
	return 0;
}