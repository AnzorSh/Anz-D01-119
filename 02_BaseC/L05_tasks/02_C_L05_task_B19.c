#include <stdio.h>
/*
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.
	Input format
Натуральное число
	Output format
YES или NO
*/

int main() {
    int a, b, c=0;
    scanf("%d", &a);
    while (a>0){
        b = a%10;
        c = c + b;
        a = a / 10;
    }
    if (c == 10)
        printf("YES");
    else
        printf("NO");
	return 0;
}