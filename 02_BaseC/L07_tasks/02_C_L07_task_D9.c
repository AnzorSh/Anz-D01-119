#include <stdio.h>
/*
Сумма цифр числа
Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
int sum_digits(int n)

	Формат входных данных
Одно натуральное число.
	Формат результата
Целое число - сумма цифр введенного числа.
	Примеры
Входные данные
123
Результат работы
6
Входные данные
1000
Результат работы
1
*/

void recur(int i, int n) {
    if(i==n+1)
        return;
    printf("%d ", i);
    recur(i+1, n);
}

void recur_rev(int i, int n) {
    if(i+1==n)
        return;
    printf("%d ", i);
    recur_rev(i-1, n);
}

int main() {
	int y, z;
	scanf("%d %d", &y, &z);
	if (y>z) {
	    recur_rev(y,z);
	} else {
	    recur(y,z);
	}
	return 0;
}