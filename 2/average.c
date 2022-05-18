
#include <stdio.h>

int main()
{
	int a, b;

	printf("请输入你需要计算的两个数字\n");

	scanf("%d %d", &a, &b);

	double c = (a + b) / 2.0;

	printf("%d和%d的平均值为%f\n", a, b, c);

	return 0;
}
