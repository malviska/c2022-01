#include<stdio.h>
#include<string.h>

int main ()
{
    char str[100], revStr[100];
    int i, j = 0;
    fgets(str, 100, stdin);
    for(i = strlen(str)- 2; i>=0; i--){
        revStr[j] = str[i];
        j++;
    }
    printf("%s", revStr);
    return 0;
}