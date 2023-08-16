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
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    for(int i=0;i<3;i++)
    {
        cn = fscanf(fp,"%s %s",english,korean); //파일 읽기
        if(cn ==0 || cn == EOF) break;
        printf("'%s'이라는 뜻을 가진 영어단어는?",korean);
        scanf("%s",answer);
        if(strcmp(english,answer)==0) printf("%s,정답입니다.\n",answer);
        else printf("틀렸습니다. 정답은 %s입니다.\n",english);
    }
    return 0;
}