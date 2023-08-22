#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B;

    // Leitura dos inteiros usando %d para atribuir um número
    // e usando &A e &B para atribuir os números às variáveis
    scanf("%d %d", &A, &B);

    // Imprime a soma com a formatação correta
    printf("A soma = %d\n", A + B);

    return 0;
}
