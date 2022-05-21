
#include <stdio.h>

int main(){
	const int PASS = 60;
	int score = 0;

	printf("请输入你的分数\n");
	scanf("%d", &score);

	printf("你的分数是%d\n", score);
	if ( score < PASS ) {
		printf("抱歉，你未通过\n");
	} else if ( score >= PASS && score <= 100 ){
		printf("恭喜你，你通过了考试\n");
	} else {
		printf("输入错误\n");
	}

	return 0;
}
