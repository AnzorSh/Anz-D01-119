#include <stdio.h>

/*
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».
    Input format
Одно целое число
    Output format
Ответ: YES или NO
*/

int main() {
	int vv, c, res1=0, res2=0;
	scanf("%d", &vv);
	while (vv > 0) {
		c = vv % 10;
		vv = vv / 10;
        if (c == 9)
            if (res1)
		        res2 = 1;
        else
		    res1 = 1;
		//printf("%d %d %d %d\n", vv, c, res1, res2);
	}
	if (res2)
	    printf("NO");
	else
	    if (res1 == 0)
	        printf("NO");
        else
            printf("YES");
	return 0;
}