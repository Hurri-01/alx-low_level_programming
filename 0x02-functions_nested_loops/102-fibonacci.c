#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers, separated by a comma and a space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int counter;
    int count_to = 50;
    long a = 1;
    long b = 2;

    for (counter = 1; counter <= (count_to / 2); counter++)
    {
        printf("%li, %li", a, b);
        	if (counter != (count_to / 2))
            		printf(", ");
        a += b;
        b += a;
    }

    if (count_to % 2 == 1)
        printf("%li", a);

    printf("\n");

    return (0);
}
