#include <stdio.h>
//#include  <assert.h>
//size_t my_strlen(const char* a)��׳�ԣ�³���ԣ� 
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
//assert���� ͷ�ļ�assert.h
//assert(P!=NULL);����������ʱ�ж�ȷ�������������
//��ͷ�ļ�֮ǰ����#define NDEBUG ��������
//int main()
//{
//	int arr[10] = {0};
//	//������arr������Ԫ�صĵ�ַ������2������
//	//1.size of(��������2.&������
//	//�������������ʾ��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//		for(i = 0; i <sz; i++)
//		{
//			scanf_s("%d", p + i);//=arr+i
//		}
//		for (i = 0; i <sz; i++)
//		{
//		    printf("%d ", *(p+i));//������ȡ����ֵ
//		}//*(arr+i)=arr[i]
//	return 0;
//}
void test(int arr[10])//ʵ���ϵ���int *arr
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);
	printf("sz2=%d\n", sz2);
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1=%d\n", sz1);
	test(arr);//(arr,sz)Ҫ�봫����Ҫ������
	//���鴫�εı����Ǵ���������Ԫ�صĵ�ַ
	//�����βμ�ʹд���������ʽ��������Ҳ��һ��ָ�����
	return 0;
}