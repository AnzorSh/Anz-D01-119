#include <stdio.h>
/*
Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
int middle(int a, int b)
	Input format
Два целых не отрицательных числа
	Output format
Одно целое число

	Examples
Input
	5 7
Output
	6
Input
	10 20
Output
	15
*/

int middle(int a, int b) 
{
	int res=0;
	res = (a + b) / 2;
	return res;
}

int main() 
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", middle(a,b));
	return 0;
}