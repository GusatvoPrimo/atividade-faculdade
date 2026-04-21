#include <stdio.h>
#include <stdlib.h>

int main() {
    float tamanhoMB, velocidadeMbps, tempoSegundos, tempoMinutos;

    printf("Digite o tamanho do arquivo (MB): ");
    scanf("%f", &tamanhoMB);

    printf("Digite a velocidade da internet (Mbps): ");
    scanf("%f", &velocidadeMbps);

    // Converter MB para Megabits (1 byte = 8 bits)
    tempoSegundos = (tamanhoMB * 8) / velocidadeMbps;

    tempoMinutos = tempoSegundos / 60;

    printf("Tempo aproximado de download: %.2f minutos\n", tempoMinutos);

    system("pause");
    return 0;
}
