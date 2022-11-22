#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int main()
{
    int i, sum = 0;
    for (i = 2; i < 2000000; i++)
    {
        if (isPrime(i))
            sum += i;
    }
    printf("%d", sum);
    return 0;
}

// yields 1179908154 = incorrect answer, 142913828922 = correct
