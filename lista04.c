#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, desconto, precoFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    desconto = valor * 0.10; // 10%
    precoFinal = valor - desconto;

    printf("O preço final com 10%% de desconto é: R$ %.2f\n", precoFinal);

    system("pause");
    return 0;
}