/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double x1, x2;
    
    printf("ax²+bx+c=0\nDigite o valor de (a), (b) e (c): \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    double delta = pow (b, 2) - (4 * a * c);
    
    if (delta < 0){
        printf("A equacao nao possui raizes reais.\n");
    }
    else
    {
        x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    
    printf("Valor de X' é: %.2lf \n", x1);
    printf("Valor de X'' é: %.2lf \n", x2);
    }
    return 0;
}
