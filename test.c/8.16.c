#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_list(char list[][12],int list_rows)
{
    int count =0;
    printf("��ü ��ǰ ����Դϴ�.\n");
    printf("===================================\n");
    for(int i=0;i<list_rows;i++)
    {
        
            printf("%-12s",list[i]);
            count++;
            if(count%4==0)
            {
                printf("\n");
            }
    }
    printf("===================================\n");
}
int main()
{
    int num;
    char foods[12][12]={"1.����","2.Ŀ��","3.�ֽ�","4.ź������","5.ĭĨ","6.�ź�Ĩ","7.����Ĩ","8.����Ĩ","9.��Ÿ��","10.���ڹ���","11.�����","12.������"};
    while(1)
    {
        print_list(foods,12);
        printf("�� �� ��ǰ�� �����Ͻðڽ��ϱ�?(1~12) :");
        scanf("%d",&num);
        if((num<1)||(num>12))
        {
            printf("��ǰ ��ȣ�� �߸� �Է��߽��ϴ�. ���α׷��� �����մϴ�.");
            exit(0);
        }
        else
        {
            printf("�����Ͻ� ��ǰ�� %-12s�Դϴ�.\n",foods[num-1]);
            printf("�̿��� �ּż� �����մϴ�.\n");
        }
    }    
    
    return 0;
}
