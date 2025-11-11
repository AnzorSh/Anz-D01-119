#include <stdio.h>
/*
Модуль числа
Составить функцию, модуль числа и привести пример ее использования.
	Input format
Целое число
	Output format
Целое не отрицательное число
    Examples
Input
    -100
Output
    100
*/

int func (int arg) 
{
    if (arg < 0) arg = arg * -1;
    return arg;
}

int main() 
{
    int ciph;
    scanf("%d", &ciph);
    printf("%d", func(ciph));
    return 0;
}