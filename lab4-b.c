#include<stdio.h>

int main ()
{
    long long int array[801];
    int num, i =0, j =0, array2[300];
    array[0] = 1;
    array[1] = 1;
    do{
        scanf("%d", &num);
        if(num > 0 && num<=800) array2[j] = num;
        j++;
    }while(num > 0 && num<=800);
    for(i = 2; i<=801; i++){
        array[i] = array[i-1] + array[i-2];
    }
    for(i = 0; i<j-1; i++){
        printf("%lld\n", array[array2[i] - 1]);
    }
    return 0;
}