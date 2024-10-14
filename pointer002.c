#include<stdio.h>

void data(int* a)
{
    *a = 3;
}

int main(void)
{
    int a=50;
    printf("value of a = %d\n",a);
    data(&a);
    printf("value of a = %d\n",a);
    return;
}