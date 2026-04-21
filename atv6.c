#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, soma = 0;

    printf("Digite o numero do domino: ");
    scanf("%d", &n);

    for (i = 0; i <= 6; i++) {
        soma += n + i;
    }

    printf("Soma das pecas com numero %d = %d\n", n, soma);

    system("pause");
    return 0;
}
