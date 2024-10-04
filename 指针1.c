#include <stdio.h>
//#include  <assert.h>
//size_t my_strlen(const char* a)健壮性（鲁棒性） 
//{
//	assert(a != NULL);
//	size_t count = 0;
//	while (*a)
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}
//assert断言 头文件assert.h
//assert(P!=NULL);用于在运行时判断确保程序符合条件
//在头文件之前加上#define NDEBUG 用来开关
//int main()
//{
//	int arr[10] = {0};
//	//数组名arr等于首元素的地址，但是2个例外
//	//1.size of(数组名）2.&数组名
//	//这里的数组名表示整个数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//		for(i = 0; i <sz; i++)
//		{
//			scanf_s("%d", p + i);//=arr+i
//		}
//		for (i = 0; i <sz; i++)
//		{
//		    printf("%d ", *(p+i));//解引用取的是值
//		}//*(arr+i)=arr[i]
//	return 0;
//}
void test(int arr[10])//实际上等于int *arr
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);
	printf("sz2=%d\n", sz2);
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1=%d\n", sz1);
	test(arr);//(arr,sz)要想传参数要创变量
	//数组传参的本质是传递数组首元素的地址
	//所以形参即使写成数组的形式，本质上也是一个指针变量
	return 0;
}