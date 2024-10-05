
//int main()
//{
//	int a=0;
//	int b=0;
//	
//	scanf_s("%d %d", &a, &b);
//	int c = a * b;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int n = 0; int m = 0;int a = 1;int total = 0;
//	total = ((n + a - 1) / a) * ((m + a - 1) / a);
//	scanf_s("%d %d %d",&n,&m,&a);
//	printf("%d", total);
//	return 0;
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int main()
{
	int result;
	int r=0; int h=0;
	double v, n;
	scanf_s("%d %d", &h, &r);//scanf要放到计算之前
	v = PI * r * r * h;
	n = 20000.0 / v;
	result = (int)ceil(n);
	printf("%d\n", result);
    return 0;
}