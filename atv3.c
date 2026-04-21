#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + 32;
    }

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("Vogal\n");
    } else if (letra >= 'a' && letra <= 'z') {
        printf("Consoante\n");
    } else {
        printf("Nao e uma letra\n");
    }

    system("pause");
    return 0;
}
