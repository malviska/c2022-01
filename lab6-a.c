#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    char c[50];
    int n = 0;
    typedef struct {
        char nome[50];
        int idade;
        float salario;
    } Pessoa;
    Pessoa pessoas[4];
    while(gets(c)){
        if(strcmp(c,"inserir") == 0){
            char vec[50];
            gets(vec);
            if(n>3){
                printf("Espaco insuficiente\n");
                continue;
            }
            sscanf(vec,"%s %d %f", pessoas[n].nome, &pessoas[n].idade, &pessoas[n].salario);
            printf("Registro %s %d %.2f inserido\n", pessoas[n].nome, pessoas[n].idade, pessoas[n].salario);
            n++;
        }else if(strcmp(c, "mostrar") == 0){
            int i;
            char nome2[50];
            gets(nome2);
            for(i = 0; i < 4; i++){
                if(strcmp(nome2,pessoas[i].nome) == 0){
                    printf("Registro %s %d %.2f\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario);
                    break;
                }
            }
            if(i == 4) printf("Registro ausente\n");
        }
    }
    return 0;
}