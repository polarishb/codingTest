#include <stdio.h>

int main() {
    char c = NULL;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}