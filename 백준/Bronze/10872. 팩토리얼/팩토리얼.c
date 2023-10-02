#include <stdio.h>

int main() {
    int num = 0;
    int answer = 1;

    scanf("%d", &num);

    while (num > 1) {
        answer *= num--;
    }

    printf("%lld", answer);

    return 0;
}