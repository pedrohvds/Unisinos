/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double l, r;
    printf("Digite a quantidade de tinta em litros: ");
    scanf("%lf", &l);
    printf("Digite o valor de cada litro em reais: ");
    scanf("%lf", &r);
    double altura, largura;
    printf("Digite a altura da parede (em METROS): ");
    scanf("%lf", &altura);
    printf("Digite a largura da parede (em METROS): ");
    scanf("%lf", &largura);
    double tinta = (altura*largura*2) / 5;
    double custo = tinta*r;
    printf("Quantidade necessária para dar 2 de mão na parede: L%.2lf \n", tinta);
    printf("Custo total: R$%.2lf", custo);
    return 0;
}