#include<stdio.h>
#include<string.h>
int numeroDias(int dia, int mes, int ano);

int main(int argc, char **argv)
{
	int  dia, mes, ano;
	char values[13];
	while(fgets(values,12, stdin)){
		sscanf(values, "%d %d %d", &dia, &mes, &ano);
		printf("%d\n", numeroDias(dia, mes, ano));
		bzero(values, sizeof(values));
	}
	return 0;
}
int numeroDias(int dia, int mes, int ano){
	int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	mes -= 1;
	int i =0;
	int anos = 2020 -  ano;
	int numMeses = 8- mes;
	int numDias = 18 - dia;
	int num = 0;
	num = anos*365 + anos/4 +1;
	if(ano%4 == 0 && numMeses < 7) num -= 1;
	if(numMeses>0){
		for(i = 0; i<numMeses;i++){
			num += meses[7-i];
		}
	}else{
		for(i = mes-1; i>7;i-- ){
			num -= meses[i];
		}
	}
	num += numDias;
	return num;

}
