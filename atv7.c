#include <stdio.h>
#include <stdlib.h>

int main() {
    int secreto, palpite, tentativas = 0;

    srand(1);

    secreto = rand() % 101;

    printf("Tente adivinhar o numero (0 a 100)\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite < secreto) {
            printf("O numero e MAIOR\n");
        } else if (palpite > secreto) {
            printf("O numero e MENOR\n");
        } else {
            printf("Acertou!\n");
            printf("Tentativas: %d\n", tentativas);
        }

    } while (palpite != secreto);

    system("pause");
    return 0;
}
