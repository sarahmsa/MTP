//Faça um programa que receba uma matriz 2x4 (dados do tipo float)
//do usuário e que imprima a transposta dela. Gere funções para auxiliar,
//como a função "imprime" e a "transposta".

#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 4

void imprime(float M[L][C]){
    int i, j;
    for(i = 0; i < L; i++){
            for (j = 0; j < C; j++){
                printf("%g\t ", M[i][j]);
            }
            printf("\n");
    }
}

void transposta(float M[L][C]){
    int i, j;
    for(j = 0; j < C; j++){
            for (i = 0; i < L; i++){
                printf("%f\t ", M[i][j]);
            }
            printf("\n");
    }
}

int main (){
    float matriz [L][C];
    int i, j;
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("Entre com [%d][%d]: ", i, j);
            scanf("%f",&matriz [i][j]);             //nao usar ponteiros
    }
    }
    imprime(matriz);
    printf("Transposta:\n");
    transposta(matriz);
return EXIT_SUCCESS;
}
