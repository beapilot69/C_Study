//
//  main.c
//  5585_change
//
//  Created by Yeongyun Jeong on 2021/04/23.
//

#include <stdio.h>

int main() {
    int money, change = 0;  // 물건값과 거스름돈 변수 선언 및 초기화
    printf("지불할 값을 입력하세요: ");
    scanf("%d", &money);
    
    change = 1000 - money;
    
    int N_3 = change / 100; // 백의 자리 몇인지
    int N_2 = (change - (N_3 * 100)) / 10;  // 십의 자리 몇인지
    int N_1 = change - (N_3 * 100) - (N_2 * 10);  // 일의 자리 몇인지
    int coin = 0;   // 동전 개수 카운터
    
    if ((money >= 1)*(money<1000)) {
        if (N_3 >= 5){ // 거스름돈이 500원 이상일 때
            coin += 1;  // 500엔짜리 동전 개수 하나 더하고
            ///
            N_3 = N_3 - 5; // 총 거스름돈 100의 자리에서 500엔 뺌.
            coin = coin + N_3; // 100엔짜리 동전 개수
            ///
            if (N_2 >= 5){ // 나머지 거스름돈이 50원 이상일 때
                coin += 1;  //50엔짜리 동전 개수 하나 더하고
                
                N_2 = N_2 - 5;  // 총 거스름돈 10의 자리에서 50원 뺌
                coin = coin + N_2;   // 10엔짜리 동전 개수
                
                if (N_1 >= 5){  // 총 거스름돈 1의 자리가 5 이상일 때
                    coin += 1;  //5엔짜리 하나 더하고
                    
                    N_1 = N_1 - 5;
                    coin = coin + N_1;
                    printf("%d\n", coin);

                }
                else{
                    coin = coin + N_1;
                    printf("%d\n", coin);

                }
            }
            else{
                coin = coin + N_2; //10엔짜리 동전 개수
                
                if (N_1 >= 5){  // 총 거스름돈 1의 자리가 5 이상일 때
                    coin += 1;  //5엔짜리 하나 더하고
                    
                    N_1 = N_1 - 5;
                    coin = coin + N_1;
                    printf("%d\n", coin);

                }
                else{
                    coin = coin + N_1;
                    printf("%d\n", coin);

                }
            }
        }
        else{   //거스름돈이 500원 미만일 때
            coin = coin + N_3; //100엔짜리 동전 개수
            
            if (N_2 >= 5){ // 나머지 거스름돈이 50원 이상일 때
                coin += 1;  //50엔짜리 동전 개수 하나 더하고
                
                N_2 = N_2 - 5;  // 총 거스름돈 10의 자리에서 50원 뺌
                coin = coin + N_2;   // 10엔짜리 동전 개수
                printf("%d\n", coin);

                if (N_1 >= 5){  // 총 거스름돈 1의 자리가 5 이상일 때
                    coin += 1;  //5엔짜리 하나 더하고
                    
                    N_1 = N_1 - 5;
                    coin = coin + N_1;
                    printf("%d\n", coin);
                }
                else{
                    coin = coin + N_1;
                    printf("%d\n", coin);

                }
            }
            else{
                coin = coin + N_2; //10엔짜리 동전 개수
                
                if (N_1 >= 5){  // 총 거스름돈 1의 자리가 5 이상일 때
                    coin += 1;  //5엔짜리 하나 더하고
                    N_1 = N_1 - 5;
                    coin = coin + N_1;
                    printf("%d\n", coin);
                }
                else{
                    coin = coin + N_1;
                    printf("%d\n", coin);
                }
            }
        }
    }
    else {
        printf("Error!\n");
    }
    
    return 0;
}
