#include <stdio.h>

void somaVetor(int *v1,int *v2)
{
	for(int i=0;i<5;i++){
		*(v1+i)=*(v1+i)+*(v2+i);
	}
}

int main()
{
	int v1[5];
	int v2[5];
	scanf("%d %d %d %d %d",&v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
	scanf("%d %d %d %d %d",&v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);
	somaVetor(v1,v2);
	printf("%d %d %d %d %d\n",v1[0], v1[1], v1[2], v1[3], v1[4]);
	return 0;
}
