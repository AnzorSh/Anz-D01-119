#include <stdio.h>

/*
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
    Input format
Целое положительное число
    Output format
Одно слов: YES или NO
*/

int main() {
	int a, count=0;
	scanf("%d", &a);
	while (a != 0) {
		count ++;
		a = a / 10;
	}
	if (count == 3)
		printf("YES");
	else
		printf("NO");
	return 0;
}