#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(void* a, void* b){
    return *(int*)a < *(int*)b;
}

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    
    qsort(sides, sides_len, sizeof(int), compare);
    answer = sides[0] < sides[1] + sides[2] ? 1 : 2;
    
    return answer;
}