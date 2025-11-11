#include <stdio.h>

/*
Ввести номер месяца и вывести название времени года.
	Input format
Целое число от 1 до 12 - номер месяца.
	Output format
Время года на английском: winter, spring, summer, autumn
*/

int main() {
	int a;
	scanf("%d", &a);
	if (a>=3 && a<=5)
		printf("spring");
	else
		if (a>=6 && a<=8)
    		printf("summer");
    	else
			if (a>=9 && a<=11)
				printf("autumn");
			else
				if (a==1 || a==2 || a==12)
					printf("winter");
	return 0;
}