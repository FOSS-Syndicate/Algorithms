#include<stdio.h>
#include<stdlib.h>

int fib();

int main(){
    int n;
    scanf("%i", &n);
    printf("%i\n", fib(n));
    return 0;
}

int fib(int n){

    if (n <= 1)
        return n;

    int array[n];
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }
    return array[n];
}