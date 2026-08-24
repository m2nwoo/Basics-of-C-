#include <stdio.h>

int main()
{
	const int ONE_HUNDRED_MILLION = 1e8;
	const double interest = 0.035;
	int month = 12;
	double max;
	
	max = ONE_HUNDRED_MILLION * interest / month;
	printf("한달 이자는: %.0f원입니다.\n", max);
	return 0;
}
