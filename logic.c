#include <stdio.h>

int main() {
    int i, numero, pares = 0, impares = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
