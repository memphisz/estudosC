#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B;

    // Leitura dos inteiros usando %d para atribuir um n�mero
    // e usando &A e &B para atribuir os n�meros �s vari�veis
    scanf("%d %d", &A, &B);

    // Imprime a soma com a formata��o correta
    printf("A soma = %d\n", A + B);

    return 0;
}
