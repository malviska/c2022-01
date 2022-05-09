#include<stdio.h>
#include<time.h>

int main () 
{
    long int n,k, x =0, y =0;
    double time_spent = 0;
    scanf("%ld %ld", &n, &k);
    clock_t begin = clock();
    while(y<k){
        x++;
        if(x%n != 0){
            y++;
        }
    }
    printf("%ld", x);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);
    return 0;
}