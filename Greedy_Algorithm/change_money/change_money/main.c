//
//  main.c
//  change_money
//
//  Created by Yeongyun Jeong on 2021/04/23.
//. Final edit on 2021/04/25

#include <stdio.h>
 
int main() {
    int coin[] = { 500,100,50,10,5,1 }; //동전
    int money, i = 0, cnt = 0;
    scanf("%d", &money);
 
    money = 1000 - money;               // 거스름돈
    while (money != 0) {                // 거스름돈이 0원이 될 때까지 반복
       
        if (coin[i] > money) {          // 동전이 거스름돈보다 클 때
            i++;
            printf("1번 %d\n", money);
            continue;
        }
        else {                          // 동전이 거스름돈보다 작거나 같을 때
            money -= coin[i];           // money = money - coin[i] // 거스름돈 - 동전1개 값
            printf("2번 %d\n", money);
            cnt++;                      // 사용한 동전 개수 +1
        }
    }
    printf("%d\n", cnt);
    return 0;
}
