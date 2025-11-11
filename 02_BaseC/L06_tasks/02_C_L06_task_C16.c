#include <stdio.h>
/*
Сдать решение задачи C16-Простое число
Составить функцию логическую функцию, которая определяет, верно ли, что число простое. Используя функцию решить задачу. int is_prime(int n)

	Формат входных данных
Одно целое не отрицательное число.
	Формат результата
YES или NO

Входные данные
13
Результат работы
YES
Входные данные
136
Результат работы
NO
*/

int is_prime(int n) {
    int ryes=0, rno=0;
    for (int i=1; i<=n; i=i+1) {
        //printf("%d ", i);
        if ((i == 1) || (i == n)) {
            //printf("\n");
        } else {
            //printf("a ");
            if ((n % i) == 0) {
                //printf("ryes\n");
                ryes = 1;
            } else {
                //printf("rno\n");
                rno = 1;
            }
        }
    }
    return ryes;
}

int main() {
    int a, yes=0;
    scanf("%d", &a);
    yes = is_prime(a);
    if ((yes) || (a==0) || a==1)
        printf("NO");
    else
        printf("YES");    
    return 0;
}