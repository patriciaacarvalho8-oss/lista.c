#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso1, peso2, media;

    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &peso1);

    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &peso2);

    media = (peso1 + peso2) / 2;

    printf("A média dos pesos é: %.2f\n", media);

    system("pause");
    return 0;
}