#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int rand1,rand2,y=0;
    int count =0,idx=0;
    int password=1,num;
    srand(time(NULL));
    while(1)
    {
        
        rand1 = rand()%10+y;
        rand2 = rand()%10+y;
        num = rand1* rand2;
        printf("########### %d번째 비밀번호##########\n",idx);
        printf("%d x %d?\n",rand1,rand2);
        printf("#############################################\n");
        printf("비밀번호를 입력하세요.(종료를 원하면 -1 입력)>>");
        scanf("%d",&password);

        if(password == num) 
        {   
            printf(">>Good! 정답입니다.\n");
            count++;
            y+=10;
        }
        else if(password == -1) break;
        else printf(">> 땡! 틀렸습니다.\n");
        idx++;
    }
    printf("비밀번호 %d개를 맞혔습니다.\n",count);
    return 0;
}
