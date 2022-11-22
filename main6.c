// only gave last line of description to fastdevai.com

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, sum = 0, sum_of_squares = 0;
    for (i = 1; i <= 100; i++)
    {
        sum += i;
        sum_of_squares += pow(i, 2);
    }
    printf("%d", pow(sum, 2) - sum_of_squares);
    return 0;
}

// yields incorrect answer 338350, correct answer is 