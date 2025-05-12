#include <stdio.h>
int main() {
    int segundos;
    scanf("%d", &segundos);
    int horas = segundos / 3600;
    int resto = segundos % 3600;
    int minutos = resto/60;
    int segundosrest = resto %60;
    printf("%d:%d:%d\n", horas, minutos, segundosrest);
    return 0;


    return 0;
}