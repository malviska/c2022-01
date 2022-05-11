#include<stdio.h>

int main ()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a%c == 0 && a%b ==0) printf("O número é divisível");
    else printf("O número não é divisível");
    return 0;
}