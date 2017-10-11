#include <stdio.h>

float calcula_volume(float x,float y,float z)
{
	return x*y*z;
}

int main()
{
	float x,y,z;
	scanf("%f %f %f", &x, &y, &z);
	printf("%.2f\n", calcula_volume(x,y,z));
	return 0;
}
