#include<stdio.h>
int main() {
    int codigo1, unidades1;
    int codigo2, unidades2;
    double preco1, preco2;
    double total;
    scanf("%d %d %lf",&codigo1, &unidades1, &preco1);
    scanf("%d %d %lf",&codigo2, &unidades2, &preco2);
    total= (preco1*unidades1)+(preco2*unidades2);
    printf("VALOR A PAGAR = R$ %.2lf\n", total);

   
    return 0;
}