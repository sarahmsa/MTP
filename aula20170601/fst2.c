#include <stdio.h>
#include <stdlib.h>

struct j {
    int numerador, denominador;
};

struct j soma (int a, int b, int c, int d){ //funcao soma dois numeros racionais
    struct j resposta;
    int s;
    resposta.numerador = ((d*a)+(b*c));
    resposta.denominador = b * d;
    s = resposta.numerador / resposta.denominador;
}


int main(){
    int s, a, b, c, d;
    printf("Informe o numerador - a - e o denominador - b - da primeira divisão: \n");
    scanf("%d",&a.numerador,&b.denominador);
    printf("Informe o numerador - c - e o denominador - d - da segunda divisão: \n");
    scanf("%d",&c.numerador,&d.denominador);
    printf("Soma = %d", soma(s));
return 0;
}
