#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int answer = rand()%5+1;
    int count=1;
    int my; //배열 초기화??
    
    while(1)
    {
        int idx =0;
        bool flag = false;
        int arr[4]={0,};
        printf("======== 자라나라 머리카락 게임 ==========\n");
        printf("시험하고싶은 약물 번호 입력(종료시: -1)\n");
        do{
            scanf("%d",arr+(idx++));
        }while (getc(stdin)== ' ');
        if(arr[0]==-1) break;
        //입력 개수를 얻어낼 방법??  이걸 통해 for문 돌리기?? 숫자가 안정해져 있는데 어캐암? idx 이용
        printf("%d번째 테스트:",count);
        for(int i=0;i<idx;i++)
        {
            printf("%d번",arr[i]);
        }
        printf("물약을 머리에 바릅니다.\n");
        for(int i=0;i<4;i++)
        {
            if(arr[i]==answer) flag = true;
        }
        if(flag) printf("성공! 머리카락이 났어요!!\n");
        else printf("실패! 머리카락이 나지 않았어요 ㅠㅠ\n"); // 왜 flag가 false로 안바뀌고 계속 true로 존재하는가?
        count ++;
    }
    printf("발모제는 몇 번일까요?\n");
    scanf("%d",&my);
    if(my==answer) printf("정답입니다!\n");
    else printf("오답입니다.\n");
    return 0;
}
// 한개 시험약을 물어보고 난 후, 계속 성공이라고 뜸.. --> 이거 해결할 방법?