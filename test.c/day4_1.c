#include <stdio.h>

int main()
{
    int coffee = 0, sandwich = 0;
    printf("Ŀ�� �ֹ� ����?");
    scanf("%d",&coffee);
    printf("������ġ �ֹ� ����?");
    scanf("%d",&sandwich);

    if(sandwich>0) printf("�ֹ��Ͻ� �޴��� �� �ݾ��� %d���Դϴ�.\n",coffee*3500+sandwich*6000);

    else printf("�ֹ��Ͻ� �޴��� �� �ݾ��� %d���Դϴ�.\n",coffee*4500);
     
    return 0;
}