#include <stdio.h>
#include <stdlib.h>

struct Divisao {
    int quociente, resto;
};

struct Divisao dividir (int a, int b){ //funcao struct
    struct Divisao resposta;
    resposta.quociente = a / b;
    resposta.resto = a % b;
}
int main (){
    struct Divisao resposta;
    int dividendo, divisor;
    printf("Entre com o dividendo: ");
    scanf("%d", &dividendo);
    printf("Entre com o divisor: ");
    scanf("%d", &divisor);
    resposta = dividir(dividendo, divisor);
    printf("Resposta: %d com resto %d\n", resposta.quociente, resposta.resto);
    return EXIT_SUCCESS;
}
