#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    float media;

    printf("Digite tres valores inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media = %.2f\n", media);

    system("pause");
    return 0;
}
