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
////	struct Book b1 = { "鹏哥c语言","鹏哥",38.8f,"PG20240520" };
////	struct Book b2 = { .id = "DG20240520",.book_name = "蒋杨森嵌入式", .author = "蒋杨森", .price = 55.5f };
////	printf("%s %s %f %s\n", b1.book_name, b1.author, b1.price, b1.id);
////	printf("%s %s %f %s\n", b2.book_name, b2.author, b2.price, b2.id);
////	return 0;
////}  
////绝对值abs 浮点数fabs
////if (fabs(f-3.45)<0.0000001）
////{}//相等eles{}不相等
//struct student
//{
//	char name[20];//成员变量
//	int age;
//	float score;
//}s3,s4,s5;//变量列表，创造全局变量
//struct point
//{
//	int x; int y;
//};
//struct
//{
//	int c;
//	struct point p;//结构体嵌套
//}s1;//匿名结构体类型，，但只能使用一次
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域  
// };
////******结构体内存对齐****** 用空间换时间的做法
//1.结构体的第?个成员对?到和结构体变量起始位置偏移量为0的地址处
//2.其他成员变量要对?到某个数字（对?数）的整数倍的地址处。
//对?数 = 编译器默认的?个对?数与该成员变量??的较?值
//VS 中默认的值为 8 Linux中gcc没有默认对?数，对?数就是成员??的?小
//3.结构体总??为最?对?数（结构体中每个成员变量都有?个对?数，所有对?数中最?的）的
//整数倍。
//4.如果嵌套了结构体的情况，嵌套的结构体成员对?到??的成员中最?对?数的整数倍处，结构
//体的整体??就是所有最?对?数（含嵌套结 构体中成员的对?数）的整数倍。
//#pragma(1)默认对齐数修改，，一般设置为2的倍数
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
//	print1(s);//传值
//	print2(&s);//传址
//	return 0;
//}
struct s
{
	int _a;
	int _b : 2;//位段的出现是节省空间 

};


