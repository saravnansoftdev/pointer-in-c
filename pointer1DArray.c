#include<stdio.h>

void oneDArray(int* arr);

int main(void)
{
    int arr[4] = {1,2,3,4};
    oneDArray(arr);
    return;
}

void oneDArray(int* arr)g
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("%d ",arr[i]);
    }
}