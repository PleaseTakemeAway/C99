#include<stdio.h>

struct book{
    int id; //��ȣ
    char *title; //����
    int available; //���Ⱑ�ɿ��� 0(���� ��),1(���� ����)
};
void print_book_list(struct book *lp)
{
    int num = sizeof(lp);

    printf("��ü ���� ����Դϴ�.\n");
    printf("=========================");
    for(int i=0;i<num;i++)
    {
        printf("%d.%10s",(i+1),(lp+i)->title);
        if((lp+i)->available==1) printf("%10s","[���Ⱑ��]");
        else printf("%10s","[���� ��]");
    }
    printf("=========================");
    printf("\n");
}
int main()
{
    int id_num;//ã�� ���� ��ȣ �Է¹��� ����
    struct book list [4]= {{1,"C �Թ���",1},{2,"���̽� �⺻��",1},{3,"�ڹ� �⺻��",1},{4,"���̽� �߱���",1}};

    while(1)
    {
        print_book_list(list);
        printf("����/�ݳ��� å ��ȣ�� �Է��ϼ���.(����: -1)");
        scanf("%d",&id_num);
        if((id_num>4)||(id_num<1)) 
        {
            printf("�߸��� �Է��Դϴ�.\n"); //�� ���� �ڵ� �ȳ���???
        }
        else if(id_num == -1)
        {
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        }
        else
        {
            if(list[id_num-1].available==0) //���� ���� ���
            {
                printf("%s �ݳ��� �Ϸ�Ǿ����ϴ�.\n",list[id_num-1].title);
                list[id_num-1].available =1;
            }
            else if(list[id_num-1].available==1)
            {
                printf("%s ������ �Ϸ�Ǿ����ϴ�.\n",list[id_num-1].title);
                list[id_num-1].available =0;
            }
        }
        
    }
    return 0;
}