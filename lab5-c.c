#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[100], a, b; 
    int i = 0;
    fgets(str1,100,stdin);
    scanf("%c", &a);
    getchar();
    scanf("%c", &b);
    getchar();
    while(i< strlen(str1)){
        if(str1[i] == a){
            str1[i] = b;
            break;
        }
        i++;
    }
    printf("%s", str1);
    return 0;
}