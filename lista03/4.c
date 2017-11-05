#include <stdio.h>

void troca(int v[][3],int i,int j)
{
	int aux=v[i][j];
	v[i][j]=v[j][i];
	v[j][i]=aux;
}

void transposta(int v[][3])
{
	troca(v,0,1);
	troca(v,0,2);
	troca(v,1,2);
}

int main()
{
	int v[3][3];
	scanf("%d %d %d",&v[0][0], &v[0][1], &v[0][2]);
	scanf("%d %d %d",&v[1][0], &v[1][1], &v[1][2]);
	scanf("%d %d %d",&v[2][0], &v[2][1], &v[2][2]);
	transposta(v);
	printf("%d %d %d\n",v[0][0], v[0][1], v[0][2]);
	printf("%d %d %d\n",v[1][0], v[1][1], v[1][2]);
	printf("%d %d %d\n",v[2][0], v[2][1], v[2][2]);
	return 0;
}
