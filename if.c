#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Digite um numero aleatorio: ");
    scanf("%d", &num);

    if (num > 10) {
        printf("O numero eh maior que 10\n");
    } else if (num == 10) {
        printf("O numero eh 10\n");
    } else {
        printf("O numero eh menor que 10\n");
    }

    return 0;
}


