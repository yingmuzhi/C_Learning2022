
///
// 这是一个把输入数字倒序的函数
//

#include <stdio.h>

int main(){
    int number = 0;
    printf("input the number your want to reverse\n");
    scanf("%d", &number);

    int digit = 0;
    int temp = number;
    int result = 0;
    while( temp != 0 ){
        digit = temp % 10;
        result = result * 10 + digit;
        temp /= 10;
    }

    printf("the reserve of %d is %d\n", number, result);

    return 0;
}
