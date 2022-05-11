#include<stdio.h>

int main ()
{
    int num1, num2, j =0, biggest;
    scanf("%d %d", &num1, &num2);
    int array[num1*num2];
    do{
        scanf("%d", &array[j]);
        if(j == 0) biggest = array[0];
        if(array[j]>= biggest && j != 0) biggest = array[j]; 
        j++;
    }while(j < num1*num2);
    printf("%d", biggest);
    return 0;
}