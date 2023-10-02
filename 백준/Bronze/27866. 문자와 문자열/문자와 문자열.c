#include <stdio.h>

int main() {
    char str[1001] = { 0 };
    int num = 0;

    scanf("%s", str);
    scanf("%d", &num);
    

    printf("%c", str[num - 1]);

    return 0;
}