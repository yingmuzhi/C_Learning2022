
///
// log2x用以计算对数
//

#include <stdio.h>

int main(){
    int number;
    int ret = 0;

    printf("input the number u want to get the ret please\n");
    scanf("%d", &number);
    int temp = number;

    while(temp > 1){
        temp /= 2;
        ret++;
    }

    printf("the log2 of %d is %d\n", number, ret);

    return 0;
}
        
