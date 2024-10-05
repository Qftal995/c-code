#include <stdio.h>
//int fact(n)
//{
//	if (n == 0)
//		return 1;
//	else if (n > 0)
//		return n * fact(n-1);精髓
//	else
//	{
//		printf("输入错误");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int m = fact(n);
//	printf("%d\n", m);
//	return 0;
//}简单的阶乘递归问题
/////////////////////////////
//void m(int n)
//{
//	if (n > 9)//注意；if后边不加分号！！！！！！！！！！！！
//	m(n / 10);
//	printf("%d  ", n % 10);	
//}
//int main()
//{
//	int n = 0;
//	//顺序打印1234
//	//1234
//	//(123) 4
//	//(12) 3 4
//	//1 2 3 4
//	scanf_s("%d", &n);
//	m(n);
//	return 0;
//}
//////////////////////////////////
//#include <windows.h>
//int main()
//{    
//	int n;
//	scanf_s("%d", &n);
//	for (int a=n;a>=1;a--)
//	{
//		printf("倒计时为%d秒\n", a);
//		Sleep(1000);//设置延迟时间
//		system("cls");//清理屏幕程序
//	}
//	return 0;
//}
///////////////////////////////////////////
//递减求积
//#include <windows.h>
//int main()
//{
//	int n;
//	int m = 1;
//	scanf_s("%d", &n);
//	for (int a = n; a >= 1; a--)
//	{
//		m = a * m;
//	}
//	printf("%d", m);
//	return 0;
//}
////////////////////////////////
//斐波那契数列
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	return 0;
//}
