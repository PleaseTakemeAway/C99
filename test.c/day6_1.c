#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int solution(int* array,int count)
{
    int sum =0;
    for(int i=0;i<count;i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int sum,count;
    printf("������ ����?");
    scanf("%d",&count);
    int* array = (int*)malloc(sizeof(int)*count);
    printf("���� ���� ���� ��Ž1,��Ž2 ������ �Է�\n");
    for(int i=0;i<count;i++)
    {
        scanf("%d",&array[i]);
    }
    sum = solution(array,count);
    printf("������ %d, ����� %.1lf�Դϴ�.\n",sum,sum/5.0);
    return 0;
}