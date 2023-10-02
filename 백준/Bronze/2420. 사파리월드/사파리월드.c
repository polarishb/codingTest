#include <stdio.h>

int main() {
    long long N = 0;
    long long M = 0;

    scanf("%lld %lld", &N, &M);

    printf("%lld", llabs(N - M));
}