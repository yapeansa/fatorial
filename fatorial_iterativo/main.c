#include <stdio.h>

int fatorial(int n)
{
    int fat = 1;

    for (int j = n; j >= 1; j--)
        fat *= j;

    return fat;
}

int main()
{
    int n;
    printf("Por favor, digite um número inteiro não negativo: ");
    scanf("%d", &n);
    printf("O fatorial de %d é igual a %d.\n", n, fatorial(n));
    return 0;
}
