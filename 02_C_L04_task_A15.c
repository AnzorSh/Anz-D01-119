#include <stdio.h>

/*
Определить уравнение прямой по координатам двух точек. Уравнение вида y=k*x+b
    Input format
Четыре целых числа через пробел. Координаты X1 Y1 X2 Y2
    Output format
Два числа K,B в формате "%.2f %.2f"

Формула расчета честно найдена на простора Интернета :)
*/

int main() {
	int x1, y1, x2, y2;
	float k, b, fx1, fy1, fx2, fy2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	fx1=x1, fy1=y1, fx2=x2, fy2=y2;
	k = (fy1 - fy2) / (fx1 - fx2);
	b = fy2 - k*fx2;
	printf("%.2f %.2f", k, b);
	return 0;
}
