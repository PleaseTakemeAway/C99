#include <stdio.h>

int main()
{
    char name[20];
    int age;
    double weight, height;
    char crime[20];
    printf("이름이 뭐에요?");
    scanf("%s", name);
    printf("몇 살이에요?");
    scanf("%d", &age);
    printf("몸무게는 몇 kg이에요?");
    scanf("%lf", &weight);
    printf("키는 몇 cm에요?");
    scanf("%lf", &height);
    printf("어떤 범죄를 저질렀어요?");
    scanf("%s", crime);

    printf("----범죄자 정보----\n");
    printf("이름:%s\n나이:%d\n몸무게:%.1lf\n키:%.1lf\n범죄명:%s\n", name, age, weight, height, crime);
    return 0;
}