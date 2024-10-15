#include<stdio.h>
void f(int a[]);



int main()
{
	int a[5]={1,2,3,4,5};
	int* ptr = &a;
	f(ptr);
//	int(*ptr)[5] = &a;
//	printf("%d",sizeof(*ptr));
}
void f(int a[])
{
	printf("%d",sizeof(a));
}
//void f(int*);
//void f(int* a)
//{
//	printf("address of a = %p\n",a);
//}
//
//int main()
//{
//	int a = 10;
//	printf("address of a = %p\n",&a);
//	f(&a);
//}
