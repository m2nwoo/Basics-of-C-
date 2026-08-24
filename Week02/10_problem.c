#include <stdio.h>

int main()
{
	const double pi = 3.1492;
	int earth = 6400;
	double max;
	max = 2 * pi * earth;
	printf("지구의 둘레:  %.2f Km\n", max);	
	return 0;
}
