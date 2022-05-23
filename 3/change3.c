
#include <stdio.h>

int main(){
	// 初始化
	int price, bill;

	printf("请输入金额\n");
	scanf("%d", &price);
	printf("请输入票面\n");
	scanf("%d", &bill);

	printf("找零%d", bill-price);

	return 0;
}
