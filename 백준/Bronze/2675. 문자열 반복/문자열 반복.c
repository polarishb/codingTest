#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int time = 0;
    scanf("%d", &time);
    while (getchar() != '\n') continue;

    for (int i = 0; i < time; i++) {
        int len = 0;
        char str[21];
        scanf("%d %s", &len, str);
        while (getchar() != '\n') continue;
        char* newStr = (char*)malloc(sizeof(char) * (len * strlen(str) + 1));
        memset(newStr, '\0', sizeof(char) * (len * strlen(str) + 1));
        for (int j = 0; j < strlen(str); j++) {
            for (int k = 0; k < len; k++) {
                newStr[j * len + k] = str[j];
            }
        }
        printf("%s\n", newStr);
    }

    return 0;
}