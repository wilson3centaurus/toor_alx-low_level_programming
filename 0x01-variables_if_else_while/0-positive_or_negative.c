#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * print_positive_or_negative - prints whether a number is positive, negative, or zero
 * @n: the integer to check
 *
 * This function takes an integer as input and prints whether it is positive,
 * negative, or zero. It uses the standard output for printing.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n > 0)
printf("positive\n");
else if (n == 0)
printf("zero\n");  
else
printf("negative\n");
return(0);
}
