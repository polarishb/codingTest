#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    return n == pow((int)sqrt(n), 2) ? 1 : 2;;
}