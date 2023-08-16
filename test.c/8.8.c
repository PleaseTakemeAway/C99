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
    printf("과목의 개수?");
    scanf("%d",&count);
    int* array = (int*)malloc(sizeof(int)*count);
    printf("국어 영어 수학 과탐1,과탐2 순서로 입력\n");
    for(int i=0;i<count;i++)
    {
        scanf("%d",&array[i]);
    }
    sum = solution(array,count);
    printf("총점은 %d, 평균은 %.1lf입니다.\n",sum,sum/5.0);
    return 0;
}