#include <stdio.h>
int main(void)
{
	int a;
	double yad;
	printf("미터를 입력하세요: ");
	scanf("%d", &a);
	yad = a * 1.0936;
	printf("%d미터는 %.4f야드입니다.", a, yad);
	return 0;
}
