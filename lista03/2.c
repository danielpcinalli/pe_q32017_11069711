#include <stdio.h>


void inverteString(char *s)
{
	char aux;
	int cont=0;
	while(s[cont]) cont++;
	cont--;
	for(int i=0;i<=cont/2;i++){
		aux=*(s+i);
		*(s+i)=*(s+cont-i);
		*(s+cont-i)=aux;
	}
}

int main()
{
	char s[255];
	fgets(s,255,stdin);
	inverteString(s);
	printf("%s\n",s);
	return 0;
}
