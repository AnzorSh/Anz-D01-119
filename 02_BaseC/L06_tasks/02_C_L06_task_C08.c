#include <stdio.h>
/*
Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать пример ее использования.
    Input format
Строка состоящая из английских букв, пробелов и запятых. В конце строки символ точка.
    Output format
Исходная строка в которой маленькие английские буквы заменены заглавными.
    Examples
Input
    hello World!.
Output
    HELLO WORLD!
Input
    abc, def.
Output
    ABC, DEF
*/

char caps(char symb) {
	if( symb >= 'a' && symb <='z' ) {
		int letter_number;
		letter_number = symb - 'a';
		symb = 'A' + letter_number;
		//putchar(c);
		return symb;
	} else {
		//putchar(c);
		return symb;
	}
}

int main() {
	char c,d;
	while( (c = getchar()) != '.') {
	    //printf("%s", caps(c));
	    d = caps(c);
        putchar(d);
	}
	return 0;
}