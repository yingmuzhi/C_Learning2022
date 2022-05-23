
#include <stdio.h>

int main(){
	// initialize
	int price = 0;
	int bill  = 0;
	// input price and bill
	printf("请输入你的消费金额\n");
	scanf("%d", &price);
	printf("请输入你的支付现金金额\n");
	scanf("%d", &bill);

	// 找零
	if ( prince > bill ) {
		printf("不够\n");
	} else {
		printf("找零:\t%d", bill - price);
	}

	return 0;
}
