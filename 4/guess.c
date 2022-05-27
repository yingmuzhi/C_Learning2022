
///
// 这是一个猜数程序。电脑先用rand随机生成一个数字，人用脑子来猜测

#include <stdio.h>

int main(){
    int number = rand()%10 + 1;   // random create a number between 1~10
    int count  = 0;
    int guessNumber = 0;

    do {
        printf("now input your guess number\n");
        scanf("%d",  &guessNumber);
        if ( guessNumber>number ){
            printf("ur guess is bigger\n");
        } else if ( guessNumber<number ){
            printf("ur guess is smaller\n");
        }
        count++;
    }while(guessNumber != number);

    printf("congratulation! u only guess %d\n", count);

    return 0;
}
        

