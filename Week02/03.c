#include <stdio.h>
int main()
{
	short a = 3200;
	int b = -12400000;
	
	printf("저장 값: %d %d\n", a, b);
	
	long long dist1 = 2700000000LL;  //27억 
	long long dist2 = 4500000000LL;  //45억 
	
	printf("지구와 천왕성 간의 거리(km): %lld\n", dist1);
	printf("태양과 해왕성 간의 거리(km): %lld\n", dist2);
	return 0;
 } 
