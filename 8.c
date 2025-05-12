#include<stdio.h>
int main() {
    int numero;
    int horastrabalhadas;
    double valorhora;
    double salario;
    scanf("%d",&numero);
    scanf("%d",&horastrabalhadas);
    scanf("%lf",&valorhora);
    salario=valorhora*horastrabalhadas;
    printf("NUMERO = %d\n",numero);
    printf("R$ = %.2lf\n",salario);
    return 0;
}