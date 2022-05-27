
///
//这是一个个倒计时发射程序

#include <stdio.h>

int main(){
    int n = 3;

    while( n>=0 ){
        printf("%d", n);
        n--;
    }

    printf("发射\n");

    return 0;
}

