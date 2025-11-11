#include <stdio.h>

/*
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.
    Input format
Целое неотрицательное число
    Output format
Целое не отрицательное число наоборот
*/

int main() {
	int in, b=0;
	scanf("%d", &in);
	while (in > 0) {
		b = b*10 + in%10;
		in = in / 10;
	}
	printf("%d", b);
	return 0;
}