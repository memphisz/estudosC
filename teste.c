#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;
    int quantidade;
    float preco;
    float desconto;
    float valorTotal;
    float valorDesconto;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade que você quer comprar: ");
    scanf("%d", &quantidade);

    printf("Digite o desconto: ");
    scanf("%f", &desconto);

    valorTotal = preco * quantidade;
    valorDesconto = valorTotal - ((desconto / 100) * valorTotal);

    printf("Codigo do Produto: %d\n", codigo);
    printf("Preco do Produto: R$ %.2f\n", preco);
    printf("Quantidade Comprada: %d\n", quantidade);
    printf("Desconto: %.2f%%\n", desconto);
    printf("Valor Total: R$ %.2f\n", valorTotal);
    printf("Valor a ser Pago: R$ %.2f\n", valorDesconto);

    return 0;
}
