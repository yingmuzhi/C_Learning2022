
///
// 使用接力break跳出嵌套循环
// 可以用one个1角，two个2角，five个5角得到x元

#include <stdio.h>

int main(){
    int x = 0;
    int one = 0, two = 0, five = 0;
    int exit = 0;

    printf("please input the money you want to get (CNY)\n");
    scanf("%d", &x);

    for ( one = 1; one < x * 10 ; one++ ){
        for ( two = 1; two < x * 5; two++ ){
            for ( five = 1; five < x * 2; five++ ){
                if( five*5 + two*2 + one == x*10 ){
                    exit = 1;
                    printf("in\n");
                    break;
                }
            }
            if(exit == 1 ) break;
        }
        if(exit == 1 ) break;
    }

    printf("with %d one, %d two, %d five ,you will get %d CNY", one, two, five, x);

    return 0;
}
                
