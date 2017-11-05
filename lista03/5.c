#include <stdio.h>
#include <stdlib.h>

void printaRepetidos(int *v,int *nums, int n, int m)
{
	int repeticao;
	for(int i=0;i<m;i++){
		repeticao=0;
		for(int j=0;j<n;j++){
			if(nums[i]==v[j]) repeticao++;
		}
		if (repeticao>1) printf("%d-%d",nums[i],repeticao);
		if(i<m-2) printf(" ");//para evitar espacos apos resposta
	}
	printf("\n");
}

int naoArmazenado(int x,int *nums,int n)
{
	int armazenado=0;
	for (int i=0;i<n;i++){
		if (x==nums[i]) armazenado=1;
	}
	return armazenado;
}


//Também retorna quantidade de valores em nums
int encontraNums(int *v, int *nums,int n)
{
	int j=0;
	for (int i=0;i<n;i++){
		if (!naoArmazenado(v[i],nums,n)){
			nums[j]=v[i];
			j++;
			}
	}
	return j;
}

void scanvetor(int * vetor)
{
	int i=0;
	char temp;
	
	do {
		scanf("%d%c",&vetor[i],&temp);
		i++;
	} while (temp != '\n');
	
}

int main()
{
	int n, m;
	int *v;
	int *nums;
	scanf("%d",&n);
	v=malloc(n*sizeof(int));
	nums=malloc(n*sizeof(int));
	scanvetor(v);
	m=encontraNums(v,nums,n);
	printaRepetidos(v,nums,n,m);
	
	free(nums);
	free(v);
	
	return 0;
}
