#include<stdio.h>
#include<time.h>

int main ()
{
    long int n,k, x;
    double time_spent;
    scanf("%ld %ld", &n, &k);
    clock_t begin = clock();
    x = k * ((double) (n)/(n-1));
    if(x%n == 0){
        x--;
    }
    printf("%ld\n",x);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);
}