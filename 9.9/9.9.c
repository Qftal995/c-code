#include <stdio.h>
//int fact(n)
//{
//	if (n == 0)
//		return 1;
//	else if (n > 0)
//		return n * fact(n-1);����
//	else
//	{
//		printf("�������");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int m = fact(n);
//	printf("%d\n", m);
//	return 0;
//}�򵥵Ľ׳˵ݹ�����
/////////////////////////////
//void m(int n)
//{
//	if (n > 9)//ע�⣻if��߲��ӷֺţ�����������������������
//	m(n / 10);
//	printf("%d  ", n % 10);	
//}
//int main()
//{
//	int n = 0;
//	//˳���ӡ1234
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
//		printf("����ʱΪ%d��\n", a);
//		Sleep(1000);//�����ӳ�ʱ��
//		system("cls");//������Ļ����
//	}
//	return 0;
//}
///////////////////////////////////////////
//�ݼ����
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
//쳲���������
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
