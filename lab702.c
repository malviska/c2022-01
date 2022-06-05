#include<stdio.h>
#include<math.h>
#include<string.h>
int eprimo(long int num);

int main ()

{
	long int num;
	char numstr[100];
	while(fgets(numstr, 100, stdin)){
		if(strcmp(numstr, "\n") == 0) break;
		sscanf(numstr, "%ld", &num);
		printf("%d\n", eprimo(num));
	}
	
	return 0;
}


int eprimo(long int num)
{
	if(num<2) return -1;
	int i, result;
	double  x = sqrt(num);
	for(i=2; i<=x; i++)
		if(num % i == 0)	return 0;
	return 1;

}
