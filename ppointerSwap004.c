#include<stdio.h>
void Swap(int*, int*);

int main(void)
{
    int a=10,b=20;
    printf("\nbefore swapping: a = %d and b = %d",a,b);
    Swap(&a,&b);
    printf("\nafter swapping: a = %d and b = %d",a,b);
    return;
}

void Swap(int* a, int* b)
{
    int c;
   /* c = *a;
    *a = *b;
    *b = c;*/
   *a = *a + *b;
   *b = *a - *b;
   *a = *a - *b;
}