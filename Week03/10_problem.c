#include <stdio.h>
#include <math.h>
int main()
{
	double result; 
	printf("입력하세요: ");
	scanf("%lf", &result);
	printf("5제곱근 결과: %f\n", pow(result, 1.0/5.0));
	
	return 0;
}
