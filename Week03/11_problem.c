#include <stdio.h>
#define PI 3.141592
int main()
{
	
	double radius;
	double area;
	printf("반지름을 입력하세요.");
	scanf("%lf", &radius); 
	
	area = PI * radius * radius;
	printf("원의 넓이는 %.2f입니다", area);
	return 0;
}
