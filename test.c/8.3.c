#include <stdio.h>

int main()
{
    char name[20];
    int age;
    double weight, height;
    char crime[20];
    printf("�̸��� ������?");
    scanf("%s", name);
    printf("�� ���̿���?");
    scanf("%d", &age);
    printf("�����Դ� �� kg�̿���?");
    scanf("%lf", &weight);
    printf("Ű�� �� cm����?");
    scanf("%lf", &height);
    printf("� ���˸� ���������?");
    scanf("%s", crime);

    printf("----������ ����----\n");
    printf("�̸�:%s\n����:%d\n������:%.1lf\nŰ:%.1lf\n���˸�:%s\n", name, age, weight, height, crime);
    return 0;
}