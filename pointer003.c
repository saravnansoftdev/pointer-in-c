#include<stdio.h>

int main()
{
    int *a = {1,2,3,4,5};
    int i;
    for(i=0; *a; i++)
    {
        printf("%d\n",*a+i);
    }
    return;
}