#include <stdio.h>
/*
Дана строка заканчивающаяся символом точка '.' Напечатать строку наоборот. Реализуйте рекурсивную функцию, которая считывает и печатает строку наоборот.
void reverse_string()
	Input format
Строка из английских букв и знаков препинания. В конце строки символ точка.
	Output format
Исходная строка задом наперед.
	Входные данные
Hello world!.
	Результат работы
!dlrow olleH
*/

void reverse_string() {
    char ch;
    scanf ("%c", &ch);
    if (ch != '.') {
        reverse_string();
        printf ("%c", ch);
    }
}

int main(void) {
    reverse_string();
}