#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    int sum = 1000;
    int product;

    for (a = 1; a < sum / 3; a++)
    {
        for (b = a; b < sum / 2; b++)
        {
            c = sum - a - b;
            if (a * a + b * b == c * c)
            {
                product = a * b * c;
                printf("%d", product);
                return 0;
            }
        }
    }
}

// yields 31875000, correct answer
