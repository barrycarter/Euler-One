#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int n) {
    char str[7];
    sprintf(str, "%d", n);
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int max = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int prod = i*j;
            if (isPalindrome(prod) && prod > max) {
                max = prod;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}