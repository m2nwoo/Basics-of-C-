#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	int max;
	printf("5개 숫자를 입력하세요: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	max = (a + b + c + d + e) % 5;
	printf("5개의 숫자 평균은 %d입니다", max);
	return 0;
}
