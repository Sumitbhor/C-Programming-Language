#include <stdio.h>
#include <math.h>

int main()
{
    int no, i, flag = 0;

    printf("Enter any number: ");
    scanf("%d", &no);

    // Special case: numbers less than 2 are not prime
    if (no < 2) {
        printf("Number is not prime\n");
        return 0;
    }

    // Check for factors up to the square root of the number
    for (i = 2; i <= sqrt(no); i++) 
    {
        if (no % i == 0)
         {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Number is prime\n");
    } else {
        printf("Number is not prime\n");
    }

    return 0;
}