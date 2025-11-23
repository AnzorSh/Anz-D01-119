#include <stdio.h>
/*
Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке возрастания, 
если A < B, или в порядке убывания в противном случае.
    Input format
Два целых числа через пробел.
    Output format
Последовательность целых чисел.
    Examples
Input
    5 2
Output
    5 4 3 2
Input
    2 7
Output
    2 3 4 5 6 7
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