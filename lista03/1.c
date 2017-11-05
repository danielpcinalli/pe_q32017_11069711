#include <stdio.h>
/*
int contaVogais(char *s)
{
	int i=0;
	int cont=0;
	while(s[i]){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') cont++;
		i++;
}
	return cont;
}
*/

int contaVogais(char *s)
{
	int cont=0;
	while (*s){
		if(*s=='a' || *s=='e' || *s=='i' || *s=='o' || *s=='u') cont++;
		s++;
	}
	return cont;
}

int main()
{
	char s[255];
	fgets(s,255,stdin);
	printf("%d\n",contaVogais(s));
	return 0;
}
