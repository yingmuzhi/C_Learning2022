///
// 这是一个用以计算全部输入值平均数的函数
#include <stdio.h>

int main(){
    int sum = 0;
    int count = 0;
    int number;

    printf("请输入你需要计算的数据，以-1为结尾\n");
    scanf("%d", &number);
    while ( number != -1 ){
        sum += number;
        count++;
        scanf("%d", &number);
    }

    double dsum = sum;
    printf("the average is %f.\n", dsum/count);

    return 0;
}


