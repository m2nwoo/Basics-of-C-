#include <stdio.h>
int main()
{
	double galaxy = 2.0e11;
	double star_galaxy = 3.5e11;
	
	double total_galaxy = galaxy * star_galaxy;
	
	printf("우주 총 별의 개수: %.0f개", total_galaxy);
	return 0;
}
