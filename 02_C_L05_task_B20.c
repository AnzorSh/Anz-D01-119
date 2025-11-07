#include <stdio.h>
/*
Проверка на простоту
Проверить число на простоту.
    Input format
Натуральное число
    Output format
Если число является простым напечатать YES, иначе NO
*/

int main() {
    int a, ryes=0, rno=0;
    scanf("%d", &a);
	/*switch (a) {
	    case 0 : break;
	}*/
    for (int i=1; i<=a; i=i+1) {
        //printf("%d ", i);
        if ((i == 1) || (i == a)) {
            //printf("\n");
        } else {
            //printf("a ");
            if ((a % i) == 0) {
                //printf("ryes\n");
                ryes = 1;
            } else {
                //printf("rno\n");
                rno = 1;
            }
        }
    }
    if ((ryes) || (a==0) || a==1)
        printf("NO");
    else
        printf("YES");
    return 0;
}