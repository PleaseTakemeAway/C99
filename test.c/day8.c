#include<stdio.h>

void square(int* arr,int index)
{

    for(int i=0;i<index;i++)
    {
        if(i%2==1) 
        {
            int y = arr[i];
            y = y*y;
            arr[i]=y;
        }
    }
}


int main()
{
    int* ptr;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    ptr = arr;
    int index = sizeof(arr)/sizeof(int);
    square(ptr,index);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}