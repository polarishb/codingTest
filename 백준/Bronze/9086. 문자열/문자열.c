#include <stdio.h>
#include <string.h>

int main() {
    char str[1000] = { 0 };
    int count = 0;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%s", str);
        printf("%c%c\n", str[0], str[strlen(str) - 1]);
    }
    
    return 0;
}