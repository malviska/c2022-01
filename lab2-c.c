#include<stdio.h>

int main ()
{
    int val,cem = 0,cin = 0,vin = 0,dez = 0,cnc = 0,doi = 0,um = 0;
    scanf("%d", &val);
    while(val != 0){
        if(val>=100){
            val -= 100;
            cem++;
        }else if(val >= 50){
            val -= 50;
            cin++;
        }else if(val>=20){
            val -= 20;
            vin++;
        }else if(val >= 10){
            val -= 10;
            dez++;
        }else if(val>= 5){
            val-= 5;
            cnc++;
        }else if(val>=2){
            val -= 2;
            doi++;
        }else{
            val -= 1;
            um++;           
        }
    }
    printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", cem,cin,vin,dez,cnc,doi,um);
    return 0;
}