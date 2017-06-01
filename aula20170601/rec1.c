#include <stdio.h>
#include <stdlib.h>
#define N 256
void imprimeinvertido(char * frase){
    if(*frase != '\o')
        imprimeinvertido(frase + 1);
    printf("%c", *frase);
}
int main(){
    char frase[N];
    printf("Entre com uma frase: ");
    fgets(frase, N, stdin);
    imprimeinvertido(frase);
    return 0;
}
