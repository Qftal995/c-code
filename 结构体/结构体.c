#include <stdio.h>
////struct Book
////{
////	char book_name[20];
////	char author[20];
////	float price;
////	char id[19];
////}b4, b5, b6;
////
////
////int main()
////{
////	struct Book b1 = { "����c����","����",38.8f,"PG20240520" };
////	struct Book b2 = { .id = "DG20240520",.book_name = "����ɭǶ��ʽ", .author = "����ɭ", .price = 55.5f };
////	printf("%s %s %f %s\n", b1.book_name, b1.author, b1.price, b1.id);
////	printf("%s %s %f %s\n", b2.book_name, b2.author, b2.price, b2.id);
////	return 0;
////}  
////����ֵabs ������fabs
////if (fabs(f-3.45)<0.0000001��
////{}//���eles{}�����
//struct student
//{
//	char name[20];//��Ա����
//	int age;
//	float score;
//}s3,s4,s5;//�����б�����ȫ�ֱ���
//struct point
//{
//	int x; int y;
//};
//struct
//{
//	int c;
//	struct point p;//�ṹ��Ƕ��
//}s1;//�����ṹ�����ͣ�����ֻ��ʹ��һ��
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����  
// };
////******�ṹ���ڴ����****** �ÿռ任ʱ�������
//1.�ṹ��ĵ�?����Ա��?���ͽṹ�������ʼλ��ƫ����Ϊ0�ĵ�ַ��
//2.������Ա����Ҫ��?��ĳ�����֣���?�������������ĵ�ַ����
//��?�� = ������Ĭ�ϵ�?����?����ó�Ա����??�Ľ�?ֵ
//VS ��Ĭ�ϵ�ֵΪ 8 Linux��gccû��Ĭ�϶�?������?�����ǳ�Ա??��?С
//3.�ṹ����??Ϊ��?��?�����ṹ����ÿ����Ա��������?����?�������ж�?������?�ģ���
//��������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ���Ա��?��??�ĳ�Ա����?��?���������������ṹ
//�������??����������?��?������Ƕ�׽� �����г�Ա�Ķ�?��������������
//#pragma(1)Ĭ�϶������޸ģ���һ������Ϊ2�ı���
//struct S
//{
//	int arr[1000];
//	int n;
//	char ch;
//};
//void print1(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("n = %d\n", tmp.n);
//	printf("ch = %c\n", tmp.ch);
//}
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("n = %d\n", ps->n);
//	printf("ch = %c\n", ps->ch);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10},  10, 'w'};
//	print1(s);//��ֵ
//	print2(&s);//��ַ
//	return 0;
//}
struct s
{
	int _a;
	int _b : 2;//λ�εĳ����ǽ�ʡ�ռ� 

};


