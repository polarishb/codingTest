#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = sides[1] + sides[0] - (abs(sides[1] - sides[0]) + 1);
    return answer;
}