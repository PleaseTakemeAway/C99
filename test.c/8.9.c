#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int answer = rand()%5+1;
    int count=1;
    int my; //�迭 �ʱ�ȭ??
    
    while(1)
    {
        int idx =0;
        bool flag = false;
        int arr[4]={0,};
        printf("======== �ڶ󳪶� �Ӹ�ī�� ���� ==========\n");
        printf("�����ϰ���� �๰ ��ȣ �Է�(�����: -1)\n");
        do{
            scanf("%d",arr+(idx++));
        }while (getc(stdin)== ' ');
        if(arr[0]==-1) break;
        //�Է� ������ �� ���??  �̰� ���� for�� ������?? ���ڰ� �������� �ִµ� ��ĳ��? idx �̿�
        printf("%d��° �׽�Ʈ:",count);
        for(int i=0;i<idx;i++)
        {
            printf("%d��",arr[i]);
        }
        printf("������ �Ӹ��� �ٸ��ϴ�.\n");
        for(int i=0;i<4;i++)
        {
            if(arr[i]==answer) flag = true;
        }
        if(flag) printf("����! �Ӹ�ī���� �����!!\n");
        else printf("����! �Ӹ�ī���� ���� �ʾҾ�� �Ф�\n"); // �� flag�� false�� �ȹٲ�� ��� true�� �����ϴ°�?
        count ++;
    }
    printf("�߸����� �� ���ϱ��?\n");
    scanf("%d",&my);
    if(my==answer) printf("�����Դϴ�!\n");
    else printf("�����Դϴ�.\n");
    return 0;
}
// �Ѱ� ������� ����� �� ��, ��� �����̶�� ��.. --> �̰� �ذ��� ���?