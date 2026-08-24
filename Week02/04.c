#include <stdio.h>

int main()
{
	float x = 3.1f; //float x = 3.14인 경우 경고 발생 
	double y = -3.141592; //double 저장공간 크기는 float의 2배 
	long double z = 29.74; //double long double 저장공간이 모두 64비트 
	
	printf("부동소수 값: %f %f %f\n", x, y, z); //모두 %f로 출력 가능 
	return 0;
}
