#include <stdio.h>
#include <stdlib.h>
struct Divisao { int quociente, resto; };
void dividir (int * pa, int * pb, int *pquociente, int *presto){
    *pquociente = (*pa)/(*pb);
    *presto = (*pa)%(*pb);
}
int main(){
    int dividendo, divisor, quociente, resto;
    printf("Entre com o dividendo: ");
    scanf("%d", &dividendo);
    printf("Entre com o divisor: ");
    scanf("%d", &divisor);
    dividir(&dividendo, &divisor, &quociente, &resto);
    printf("Resposta: %d com resto %d \n", quociente, resto);
    return 0;
    }
