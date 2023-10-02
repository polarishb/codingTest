#include <stdio.h>
#include <string.h>

int main() {
    char str[101] = { 0 };

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < 'a') str[i] ^= 32;
        else str[i] ^= 32;

        printf("%c", str[i]);
    }

    return 0;
}