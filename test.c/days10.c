#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_list(char list[][12],int list_rows)
{
    int count =0;
    printf("전체 상품 목록입니다.\n");
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
    char foods[12][12]={"1.우유","2.커피","3.주스","4.탄산음료","5.칸칩","6.거북칩","7.감자칩","8.고구마칩","9.안타볼","10.초코버섯","11.가재깡","12.씨리얼"};
    while(1)
    {
        print_list(foods,12);
        printf("몇 번 상품을 구매하시겠습니까?(1~12) :");
        scanf("%d",&num);
        if((num<1)||(num>12))
        {
            printf("상품 번호를 잘못 입력했습니다. 프로그램을 종료합니다.");
            exit(0);
        }
        else
        {
            printf("구매하신 상품은 %-12s입니다.\n",foods[num-1]);
            printf("이용해 주셔서 감사합니다.\n");
        }
    }    
    
    return 0;
}
