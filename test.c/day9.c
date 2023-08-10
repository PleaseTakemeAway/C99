#include<stdio.h>

struct book{
    int id; //번호
    char *title; //제목
    int available; //대출가능여부 0(대출 중),1(대출 가능)
};
void print_book_list(struct book *lp)
{
    int num = sizeof(lp);

    printf("전체 도서 목록입니다.\n");
    printf("=========================");
    for(int i=0;i<num;i++)
    {
        printf("%d.%10s",(i+1),(lp+i)->title);
        if((lp+i)->available==1) printf("%10s","[대출가능]");
        else printf("%10s","[대출 중]");
    }
    printf("=========================");
    printf("\n");
}
int main()
{
    int id_num;//찾을 도서 번호 입력받을 변수
    struct book list [4]= {{1,"C 입문편",1},{2,"파이썬 기본편",1},{3,"자바 기본편",1},{4,"파이썬 중급편",1}};

    while(1)
    {
        print_book_list(list);
        printf("대출/반납할 책 번호를 입력하세요.(종료: -1)");
        scanf("%d",&id_num);
        if((id_num>4)||(id_num<1)) 
        {
            printf("잘못된 입력입니다.\n"); //왜 여기 코드 안나옴???
        }
        else if(id_num == -1)
        {
            printf("프로그램을 종료합니다.\n");
            return 0;
        }
        else
        {
            if(list[id_num-1].available==0) //대출 중일 경우
            {
                printf("%s 반납이 완료되었습니다.\n",list[id_num-1].title);
                list[id_num-1].available =1;
            }
            else if(list[id_num-1].available==1)
            {
                printf("%s 대출이 완료되었습니다.\n",list[id_num-1].title);
                list[id_num-1].available =0;
            }
        }
        
    }
    return 0;
}