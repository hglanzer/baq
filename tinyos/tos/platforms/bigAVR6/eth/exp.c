#include<stdio.h>

int main(void)
{
	float val = 100;
	int x = 0;
	for(x=0; x<50; x++)
	{
		printf("val %10f, for n = %3d\n", val, x);
		val = val * 1.04;
	}
	

	return 0;
}
