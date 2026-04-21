#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_segundos;
    int horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("Resultado: %d hora(s), %d minuto(s), %d segundo(s)\n", horas, minutos, segundos);

    system("pause"); 
    return 0;
}
