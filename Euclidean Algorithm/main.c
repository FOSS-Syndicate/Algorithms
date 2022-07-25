#include<stdio.h>
#include<stdlib.h>

int GCD();

int main()
{
    int a, b;
    scanf("%i %i", &a, &b);
    printf("%i\n", GCD(a, b));
    return 0;
}

int GCD(int a, int b)
{
    if (a == 0)
        return b;
    return GCD(b%a, a);
}

