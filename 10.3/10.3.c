#include <stdio.h>
//void Printf(int arr[3][5], int n , int m)//int(*arr)[5]
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//
//
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Printf(arr, 3, 5);//二维数组的可以理解为一维数组的数组
//	return 0;//arr是它第一行的地址
//}  
int add(int x, int y)
{
	return x + y;//减少变量
}
int main()
{
	int (*pf)(int, int) = &add;//函数指针变量
	int ret =(*pf)(4,5);
	printf("%d\n", ret);

	return 0;
}