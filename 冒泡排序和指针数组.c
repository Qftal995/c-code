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
//				flag = 0;//����������
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)//ʹ���������������������
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
////ð������  
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
////*pa=a.*ppa=pa
////a=*pa=**ppa
////����ָ����������һ��ָ��ĵ�ַ
//}
////ָ�����飺�����е�ÿ��Ԫ����ָ������
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
//int main()//�ַ�ָ�����
//{
//	const char* p = "abcdef";//��ͬ�����飬�����޸ģ�ǰ����Լ�const
//	printf("%c\n", *p);//%c��ӡ�ַ���*pΪ��Ԫ�ص�ַ
//	printf("%s\n", p);//%s��ӡ�ַ���
//	return 0;
//} 
//int main()
//{
//	char str1[] = "hello bit.";//������ͬ�ĳ����ַ���ֻ��Ҫһ��
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)//���������Ƚϵ�����Ԫ�ص�ַ
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)�Ƚϵ���ֵ
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}
/////////////////////////////////////////////////
//ָ�����飺�����飬��ŵĵ���ָ��
//����ָ�룺�������ĵ�ַ
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int (*p)[10] = &arr;//����ָ��
	int* p[10];//ָ������
	//p��������ָ�룬p�д�ŵľ�������ĵ�ַ
	//arr������int*      arr+1 �����ĸ��ֽ�
	//&arr[0]��������int*    &arr[0]+1�������ֽ�
	//&arr��������int��*��[10]   &arr+1������������

	return 0;
}
