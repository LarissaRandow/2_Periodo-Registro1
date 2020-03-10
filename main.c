#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 2
#define CAMPO_NOME 50

typedef struct tipo_data
{
    int dia, mes, ano;
}DATA;

struct formulario
{
    char nome[CAMPO_NOME];
    char cargo[CAMPO_NOME];
    int dependentes;
    DATA aniversario;
    float salario;
};

int main()
{
    struct formulario Funcionario[TAMANHO];
    int i;
    float Soma, Media;
    for(i = 0;i  < TAMANHO; i++)
    {
        printf("Nome: ");scanf("\n%[^\n]",Funcionario[i].nome);
        printf("Cargo: ");scanf("\n%[^\n]",Funcionario[i].cargo);
        printf("Filhos: ");scanf("%i",&Funcionario[i].dependentes);
        printf("Salario: ");scanf("%f",&Funcionario[i].salario);
        printf("Aniversario:\n");
        printf("Dia: ");scanf("%i",&Funcionario[i].aniversario.dia);
        printf("Mes: ");scanf("%i",&Funcionario[i].aniversario.mes);
        printf("Ano: ");scanf("%i",&Funcionario[i].aniversario.ano);
        Soma =  Soma + Funcionario[i].salario;

    }
    Media = Soma / TAMANHO;

    for(i = 0;i  < TAMANHO; i++)
    {
        if(Funcionario[i].dependentes > 2)
        {
            printf("Nome FILHO: %s\n",Funcionario[i].nome);
            printf("Cargo FILHO: %s\n",Funcionario[i].cargo);
        }
        if(Funcionario[i].salario > Media)
            printf("Cargo SALARIO: %s\n",Funcionario[i].cargo);
        if(Funcionario[i].aniversario.mes == 2)
            printf("Nome MES: %s\n",Funcionario[i].nome);

    }
    return 0;
}
