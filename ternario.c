#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    //Operador ternario � uma forma mais curta de usar o if/else
    printf("Digite um numero para saber se eh positivo ou negativo: ");
    scanf("%d", &num);
    //Primeiro coloco a condi��o a testar ? e em seguida verdadeiro : falso
    num > 0 ? printf("Seu numero eh positivo") : printf("Seu numero eh negativo");

    return 0;

}
