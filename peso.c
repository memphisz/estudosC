#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura = 0;
    char sexo;
    float peso1 = 72.7;
    float pesoideal;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo com f ou m: ");
    scanf(" %c", &sexo);
    pesoideal = (peso1 * altura) - 58;
    printf("Seu peso ideal = %.2f\n", pesoideal);


}
