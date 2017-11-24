#include <stdio.h>
#include <math.h>

typedef struct espaco{
	float x;
	float y;
	float z;
} espaco;

float distancia3d(espaco c1, espaco c2)
{
	float dist=0;
	dist+=(c1.x-c2.x)*(c1.x-c2.x);
	dist+=(c1.y-c2.y)*(c1.y-c2.y);
	dist+=(c1.z-c2.z)*(c1.z-c2.z);
	dist=sqrt(dist);
	return dist;
}

int main()
{
	espaco coord1;
	espaco coord2;
	scanf("%f, %f, %f",&coord1.x,&coord1.y,&coord1.z);
	scanf("%f, %f, %f",&coord2.x,&coord2.y,&coord2.z);
	printf("%0.2f",distancia3d(coord1,coord2));
	printf("\n");
	return 0;
}
