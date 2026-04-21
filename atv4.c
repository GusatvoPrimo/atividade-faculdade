#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i, mmc;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &a, &b);

    i = (a > b) ? a : b;

    while (1) {
        if (i % a == 0 && i % b == 0) {
            mmc = i;
            break;
        }
        i++;
    }

    printf("MMC = %d\n", mmc);

    system("pause");
    return 0;
}
