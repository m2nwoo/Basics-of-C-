#include <stdio.h>
int main()
{
	float F;
	float C;
	printf("화씨를 입력하세요: ");
	scanf("%f", &F);
	C = (F - 32) / 1.8;
	printf("섭씨는%.2f도입니다", C);
	return 0;
}
