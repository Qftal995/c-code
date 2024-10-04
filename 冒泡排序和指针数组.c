#include <stdio.h>
//void put_arr(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", arr + i);
//	}
//}
//void bubble_sort(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;//还不是有序
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)//使得趋近于有序的数组更便捷
//		{
//			break;
//		}
//	}
//}
//printf_arr(int *arr, int sz)
//{
//	int  i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	put_arr(arr, sz);
//	bubble_sort(arr, sz);
//	printf_arr(arr, sz);
//    return 0;
//}
////冒泡排序  
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
////*pa=a.*ppa=pa
////a=*pa=**ppa
////二级指针就是来存放一级指针的地址
//}
////指针数组：数组中的每个元素是指针类型
//int main()
//{ 
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* arr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()//字符指针变量
//{
//	const char* p = "abcdef";//不同于数组，不能修改，前面可以加const
//	printf("%c\n", *p);//%c打印字符，*p为首元素地址
//	printf("%s\n", p);//%s打印字符串
//	return 0;
//} 
//int main()
//{
//	char str1[] = "hello bit.";//内容相同的常量字符串只需要一份
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)//数组名，比较的是首元素地址
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)比较的是值
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}
/////////////////////////////////////////////////
//指针数组：是数组，存放的的是指针
//数组指针：存放数组的地址
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int (*p)[10] = &arr;//数组指针
	int* p[10];//指针数组
	//p就是数组指针，p中存放的就是数组的地址
	//arr类型是int*      arr+1 跳过四个字节
	//&arr[0]的类型是int*    &arr[0]+1跳过四字节
	//&arr的类型是int（*）[10]   &arr+1跳过整个数组

	return 0;
}
