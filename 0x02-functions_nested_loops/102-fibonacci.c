#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main() {
    int i, n = 50;
    int fib[n];
    
    fib[0] = 1;
    fib[1] = 2;
    
    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    for (i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i < n-1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
