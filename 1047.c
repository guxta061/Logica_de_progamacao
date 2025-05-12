#include <stdio.h>

int main() {
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    scanf("%d %d %d %d", &hora_inicio, &minuto_inicio, &hora_fim, &minuto_fim);
    
    int inicio_minutos = hora_inicio * 60 + minuto_inicio;
    int fim_minutos = hora_fim * 60 + minuto_fim;
    int duracao;
    
    if (fim_minutos > inicio_minutos) {
        duracao = fim_minutos - inicio_minutos;
    } else {
        duracao = (24 * 60 - inicio_minutos) + fim_minutos;
    }
    
    int horas = duracao / 60;
    int minutos = duracao % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    
    return 0;
}