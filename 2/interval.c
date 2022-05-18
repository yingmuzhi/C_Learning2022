
#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("请输入时间1 hs mins:\n");
	scanf("%d %d", &hour1, &minute1);

	printf("请输入时间2 hs mins:\n");
	scanf("%d %d", &hour2, &minute2);

	int time1 = 60 * hour1 + minute1;
	int time2 = 60 * hour2 + minute2;
	int time = time2 - time1;

	printf("time2 - time1的时间差是%d小时%d分", time/60, time%60);

	return 0;
}
