#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int rand1,rand2,x=10,y=0;
    int count =0,idx=0;
    int password=1,num;
    srand(time(NULL));
    while(1)
    {
        
        rand1 = rand()%x+y;
        rand2 = rand()%x+y;
        num = rand1* rand2;
        printf("########### %d��° ��й�ȣ##########\n",idx);
        printf("%d x %d?\n",rand1,rand2);
        printf("#############################################\n");
        printf("��й�ȣ�� �Է��ϼ���.(���Ḧ ���ϸ� -1 �Է�)>>");
        scanf("%d",&password);

        if(password == num) 
        {   
            printf(">>Good! �����Դϴ�.\n");
            count++;
            x+=10;
            y+=10;
        }
        else if(password == -1) break;
        else printf(">> ��! Ʋ�Ƚ��ϴ�.\n");
        idx++;
    }
    printf("��й�ȣ %d���� �������ϴ�.\n",count);
    return 0;
}