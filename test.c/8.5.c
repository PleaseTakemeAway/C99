#include <stdio.h>

int main()
{
    int coffee = 0, sandwich = 0;
    printf("커피 주문 개수?");
    scanf("%d",&coffee);
    printf("샌드위치 주문 개수?");
    scanf("%d",&sandwich);

    if(sandwich>0) printf("주문하신 메뉴의 총 금액은 %d원입니다.\n",coffee*3500+sandwich*6000);

    else printf("주문하신 메뉴의 총 금액은 %d원입니다.\n",coffee*4500);
     
    return 0;
}