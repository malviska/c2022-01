#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    char c[50];
    int n = 0;
    typedef struct {
        char rua[50];
        int numero;
        char estado[50];
    } endereco;
    typedef struct {
        char nome[50];
        int idade;
        float salario;
        endereco end;
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
            sscanf(vec,"%s %d %f %s %d %s", pessoas[n].nome, &pessoas[n].idade, &pessoas[n].salario, pessoas[n].end.rua,
            &pessoas[n].end.numero, pessoas[n].end.estado);
            printf("Registro %s %d %.2f %s %d %s inserido\n", pessoas[n].nome,
             pessoas[n].idade, pessoas[n].salario, pessoas[n].end.rua, pessoas[n].end.numero, pessoas[n].end.estado);
            n++;
        }else if(strcmp(c, "alterar") == 0){
            int i, idade2, numero2;
            float salario2;
            char data[200], name2[50], rua2[50], estado2[50];
            gets(data);
            sscanf(data, "%s %d %f %s %d %s", name2, &idade2, &salario2, rua2, &numero2, estado2);
            for(i = 0; i < 4; i++){
                if(strcmp(name2,pessoas[i].nome) == 0){
                    sscanf(data,"%s %d %f %s %d %s", pessoas[i].nome, &pessoas[i].idade, &pessoas[i].salario, pessoas[i].end.rua,
                    &pessoas[n].end.numero, pessoas[n].end.estado);
                    printf("Registro %s %d %.2f %s %d %s alterado\n", pessoas[i].nome,
             pessoas[i].idade, pessoas[i].salario, pessoas[i].end.rua, pessoas[i].end.numero, pessoas[i].end.estado);
                    break;
                }
            }
            if(i == 4) printf("Registro ausente\n");
        }else if(strcmp(c, "mostrar") == 0){
            int i;
            char nome2[50];
            gets(nome2);
            for(i = 0; i < 4; i++){
                if(strcmp(nome2,pessoas[i].nome) == 0){
                    printf("Registro %s %d %.2f %s %d %s\n", pessoas[i].nome,
             pessoas[i].idade, pessoas[i].salario, pessoas[i].end.rua, pessoas[i].end.numero, pessoas[i].end.estado);
                    break;
                }
            }
            if(i == 4) printf("Registro ausente\n");
        }
    }
    return 0;
}