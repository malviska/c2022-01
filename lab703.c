#include<stdio.h>
#include<math.h>
#include<string.h>
int Primo(long int num);
long int Soma_Primos(int num);


int main ()

{
	int i, number = 2;
	int num;
	long int soma;
	char numstr[100];
	while(fgets(numstr, 100, stdin)){
		if(strcmp(numstr, "\n") == 0) break;
		sscanf(numstr, "%d", &num);
		soma = Soma_Primos(num);
		printf("%ld\n", soma);
	}
	
	return 0;
}


int Primo(long int num)
{
	if(num<2) return -1;
	int i;
	double  x = sqrt(num);
	for(i=2; i<=x; i++)
		if(num % i == 0)	return 0;
	return 1;

}
long int Soma_Primos(int num){
	int i;
	long int soma =0;
	long int number = 2;
	for(i=0; i<num;i++){
			if(Primo(number) == 1){
				soma += number;
			}else i--;
			number++;
		}
	return soma;
}
