#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char english[20];
    char korean[40];
    char answer[20];
    int cn =0;
    fp = fopen("C:\\Users\\LG\\Desktop\\words.txt","r");
    if(fp==NULL)
    {
        printf("������ ������ �ʾҽ��ϴ�.\n");
        return 1;
    }
    for(int i=0;i<3;i++)
    {
        cn = fscanf(fp,"%s %s",english,korean); //���� �б�
        if(cn ==0 || cn == EOF) break;
        printf("'%s'�̶�� ���� ���� ����ܾ��?",korean);
        scanf("%s",answer);
        if(strcmp(english,answer)==0) printf("%s,�����Դϴ�.\n",answer);
        else printf("Ʋ�Ƚ��ϴ�. ������ %s�Դϴ�.\n",english);
    }
    return 0;
}