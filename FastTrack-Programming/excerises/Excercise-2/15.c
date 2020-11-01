#include <stdio.h>
long long power(long long n1, int n2);
int main() {
    int base, a;
    long long res;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    res = power(base, a);
    printf("%d^%d = %lld \n", base, a, res);
    return 0;
}

long long power(long long base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

