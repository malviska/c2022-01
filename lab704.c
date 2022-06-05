#include<stdio.h>

int funcao(int ano);

int main ()
{
	int ano;
	while(scanf("%d", &ano)!= EOF) printf("%d\n", funcao(ano));
	return 0;
}

int funcao(int ano){
	if(ano % 4 != 0) return 0;
	if(ano % 100 == 0 && ano % 400 !=0) return 0;
	return 1;
}
