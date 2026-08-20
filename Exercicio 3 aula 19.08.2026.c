/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite os dois numeros inteiros: \n");
    scanf("%d %d", &a, &b);
    if (a>b){
        printf("%d é maior", a);
    } else {
        printf("%d é maior", b);
    }
    return 0;
}
