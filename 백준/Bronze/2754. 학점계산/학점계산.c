#include <stdio.h>

int main() {
    char str[3] = { 0 };
    double num = 0.0;

    scanf("%s", str);

    switch (str[0]) {
    case 'A':
        num += 4.0;
        break;
    case 'B':
        num += 3.0;
        break;
    case 'C':
        num += 2.0;
        break;
    case 'D':
        num += 1.0;
        break;
    }

    switch (str[1]) {
    case '+':
        num += 0.3;
        break;
    case '-':
        num -= 0.3;
        break;
    }

    printf("%.1f", num);

    return 0;
}