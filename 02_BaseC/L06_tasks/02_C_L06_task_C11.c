#include <stdio.h>
/*
Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования. int nod(int a, int b)

    Input format
Два целых положительных числа
    Output format
Одно целое число - наибольший общий делитель.
    Examples

Input
    14 21
Output
    7
*/

int nod(int x, int y) {
    int t;
    while (y != 0) {
        t=y;
        y=x%y;
        x=t;
        //printf("%d %d %d\n", x, y, t);
    }
    return x;
}

int main() {
    //int a=35, b=14, t;
    int a, b;
    scanf("%d %d", &a, &b);
	printf("%d", nod(a,b));
	return 0;
}