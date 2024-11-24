#include <stdio.h>

int fatorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main()
{
    int n;
    printf("Por favor, digite um número inteiro não negativo: ");
    scanf("%d", &n);
    printf("O fatorial de %d é igual a %d.\n", n, fatorial(n));
    return 0;
}
