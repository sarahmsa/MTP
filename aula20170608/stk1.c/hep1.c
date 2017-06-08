#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media (float * vetor, int qtde){
    int i;
    float soma = 0.f;
    for (i = 0; i < qtde; i++)
        soma += vetor [i];
    return soma / qtde;
}

float desviopadrao(float * vetor, int qtde){
    int i;
    float n = media(vetor, qtde), soma = 0.f;
    for (i = 0; i < qtde; i++)
        soma += pow(vetor[i]-n,2);
    return sqrt((1.f/(qtde-1))* soma);
}

int main(){
    float * vetor;
    int qtde, i;
    printf("Quantos numeros deseja entrar: ");
    scanf("%d",&qtde);
    vetor = (float *) malloc(qtde * sizeof(float));
    for (i = 0; i < qtde; i++){
        printf("Elemento [%d]: ", i);
        scanf("%f",&(vetor[i]));
    }
    printf("MEDIA = %f\n", media(vetor,qtde));
    printf("DESVIO = %f\n", desviopadrao(vetor, qtde));
    free(vetor);
    return 0;
}
