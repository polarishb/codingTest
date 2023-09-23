#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = n % slice ? n / slice + 1 : n / slice;
    return answer;
}