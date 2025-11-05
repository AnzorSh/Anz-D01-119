/*
Вывести на экран таблицы истинности для A->B и A<->B
*/
#include <stdio.h>

int xor (int a, int b)
{
	return !a||b;
}
int eqv (int a, int b)
{
	return (a && b) || (!a && !b);
}

int main()
{
    printf("A | B | A -> B\n");
    printf("%d | %d | %d\n", 0, 0, xor(0,0));
    printf("%d | %d | %d\n", 0, 1, xor(0,1));
    printf("%d | %d | %d\n", 1, 0, xor(1,0));
    printf("%d | %d | %d\n", 1, 1, xor(1,1));


    printf("\n\n");


    printf("A | B | A <-> B\n");
    printf("%d | %d | %d\n", 0, 0, eqv(0,0));
    printf("%d | %d | %d\n", 0, 1, eqv(0,1));
    printf("%d | %d | %d\n", 1, 0, eqv(1,0));
    printf("%d | %d | %d\n", 1, 1, eqv(1,1));
    return 0;
}
