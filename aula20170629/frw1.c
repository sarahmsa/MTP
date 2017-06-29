#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256

void captura (char * nome, int * p_idade_em_anos, float * p_altura_em_metros){
    char c;
    fprintf(stdout,"Entre com o nome:");
    fgets(nome,MAXCHAR,stdin);
    fprintf(stdout,"Entre com a idade em anos:");
    fscanf(stdin,"%d",p_idade_em_anos);
    fprintf(stdout,"Entre com a altura em metros:");
    fscanf(stdin,"%f",p_altura_em_metros);
}
void mostra(char * nome, int idade_em_anos, float altura_em_metros){
    printf("%s%d anos,%g metros.\n", nome, idade_em_anos, altura_em_metros);
}
void gravar (char * nome_arquivo){
    char nome [MAXCHAR];
    int idade_em_anos;
    float altura_em_metros;
    FILE * arquivo = NULL;
    arquivo = fopen("nome_arquivo","w");
    if (arquivo == NULL){
        fprintf(stderr,"Problema na gravacao\n");
        exit(EXIT_FAILURE);
    }
    captura (nome, &idade_em_anos, &altura_em_metros);
    fprintf(arquivo,"%s%d\n%f\n", nome,idade_em_anos,altura_em_metros);
    fclose(arquivo);
}

void recuperar (char * nome_arquivo){
    char nome [MAXCHAR];
    int idade_em_anos;
    float altura_em_metros;
    FILE * arquivo = NULL;
    arquivo = fopen(nome_arquivo,"r");
    if (arquivo == NULL){
        fprintf(stderr,"Arquivo inexistente\n");
        exit(EXIT_FAILURE);
    }
    fgets(nome,MAXCHAR,arquivo);
    fscanf(arquivo, "%d", &idade_em_anos);
    fscanf(arquivo, "%f", &altura_em_metros);
    fclose(arquivo);
    mostra(nome,idade_em_anos, altura_em_metros);
}
int menu(char * nome_arquivo){
    int opc; char c;
    printf("1 - Gravar:\n");
    printf("2 - Recuperar:\n");
    printf("3 - Sair\n");
    printf("\nDigite sua opcao: ");
    scanf("%d", &opc);while (!(c=getchar()));
    if (opc == 1)gravar(nome_arquivo);
    else if (opc == 2) recuperar(nome_arquivo);
    return opc;
}

int main (){
    char nome_arquivo [MAXCHAR];
    printf("\nEntre com arquivo (sem espacos): ");
    scanf("%s", nome_arquivo);
    while(menu(nome_arquivo)!=3) ;
    return EXIT_SUCCESS;
    }
