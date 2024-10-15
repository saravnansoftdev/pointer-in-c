#include<stdio.h>

int main(void)
{
	int arr[5] = {1,2,3,4,5};
	int *p;
	int (*ptr)[5];
	p = arr;
	ptr = &arr;	
	printf("%d\n",sizeof(p));
	printf("%d\n",sizeof(ptr));
	printf("%d\n",sizeof(*p));
	printf("%d\n",sizeof(*ptr));
//	printf("%p\n",p);
//	printf("%p\n",ptr);
//	int i,j;
//	for(i=0; *ptr!; i++)
//	{
//		printf("%p\n",ptr+i);
//	} 
//	int a[4]={1,2,3,4};
//	int* p = a;
//	printf("%x\n",*p);
//	printf("%x\n",*(p+1));
//	int i;
//	for(i=0; a[i]!=0; i++)
//	{
//		printf("%d\n",*p+i);
//	}
	return;
}
