#include <stdio.h>

/*
Даны стороны треугольника a, b, c. Определить существует ли такой треугольник.
    Input format
Три целых числа. Стороны треугольника a, b, c.
    Output format
YES или NO
*/

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a+b)<=c || (b+c)<=a || (a+c)<=b)
	    printf("NO");
	else
	    if ((a+b)>c || (b+c)>a || (a+c)>b)
	        printf("YES");
	return 0;
}