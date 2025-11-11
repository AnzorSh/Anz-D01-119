#include <stdio.h>
/*
Цифры по возрастанию
Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу. int grow_up(int n)

    Input format
Одно целое не отрицательное число
    Output format
YES или NO

Input
    258
Output
    YES
Input
    528
Output
    NO
*/

int grow_up(int n) {
	int c1, c2, nok=0;
	while (n > 0) {
		c1 = n % 10;
		c2 = n / 10 % 10;
		n = n / 10;
		if (c1 <= c2)
		    nok=1;
		    //printf("%d\n", nok);
	}
	return nok;
}

int main() {
	int a, non=0;
	scanf("%d", &a);
	switch (a) {
	    case 0 : break;
	}
	non = grow_up(a);
	//printf("non %d\n", non);
	if (non == 0)
	    printf("YES");
	else
	    printf("NO");
	return 0;
}