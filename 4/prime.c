
///
// prime算法用于判断是否是素数
//
#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int isPrime = 0;
    int i;

    for ( i = 2; i<x; i++){
        if ( x%i == 0 ){
            isPrime = 1;
            break;
        }
    }

    if (isPrime){
        printf("is a prime\n");
    } else {
        printf("is not a prime\n");
    }

    return 0;
}
    
