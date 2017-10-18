#include <stdio.h>
#include <math.h>

int bin_p_decTR(int x, int parcial,int aux)
{
	if (x==0) return parcial;
	return bin_p_decTR(x/10,parcial+(x%2)*pow(2,aux),++aux);
}

int bin_p_dec(int x)
{
	return bin_p_decTR(x,0,-1);
}

int dec_p_binTR(int x, int parcial, int aux)
{	
	if (x/2==0) return parcial+x%2*pow(10,aux+1);
	return dec_p_binTR(x/2,parcial+x%2*pow(10,aux),++aux);
}

int dec_p_bin(int x)
{
	return dec_p_binTR(x,0,-1);
}

int conversao(int x, int op)
{
	if (op==1) return dec_p_bin(x);
	return bin_p_dec(x);
}

int main()
{
	int x,op;
	scanf("%d %d", &x, &op);
	printf("%d\n", conversao(x, op));
}
