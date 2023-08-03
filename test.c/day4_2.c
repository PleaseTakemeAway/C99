#include <stdio.h>

int main()
{
    int count =5;
    int num,answer;
    printf("숫자: ");
    scanf("%d",&answer);
    while(count>0)
    {
        printf("남은 기회 %d번\n",count);
        printf("숫자를 맞혀보세요.(1~100)");
        scanf("%d",&num);
        if(num==answer) printf("정답입니다!\n");
        else if(num>answer) printf("DOWN ↓\n");
        else printf("UP ↑\n");

        count--;
    }
    return 0;
}