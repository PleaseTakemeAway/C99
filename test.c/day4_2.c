#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count =5;
    int num,answer;
    srand(time(NULL));
    answer = rand()%100+1;
    while(count>0)
    {
        printf("남은 기회 %d번\n",count);
        printf("숫자를 맞혀보세요.(1~100)");
        scanf("%d",&num);
        if(num==answer)
        {
            printf("정답입니다!\n");
            break;
        }
        else if(num>answer) printf("DOWN ↓\n");
        else printf("UP ↑\n");
        count--;
    }
    if(count ==0) printf("실패입니다.\n");
    return 0;
}
