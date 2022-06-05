#include<stdio.h>
#include<string.h>

int main ()
{
    char str [100], substr[100];
    char *a;
    fgets(str, 100, stdin);
    gets(substr);
    a = strstr(str,substr);
    printf( strstr(str,substr) == NULL ? "Não é Substring" : "É substring");
    return 0;
}