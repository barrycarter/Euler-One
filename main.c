#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int i,count=0;
    for(i=2;count<10001;i++)
    {
        if(isPrime(i))
            count++;
    }
    printf("%d",i-1);
    return 0;
}

