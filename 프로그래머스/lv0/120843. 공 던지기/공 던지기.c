#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    int idx = 0;
    
    for(int i = 1; i < k; i++){
        idx += 2;
    }
    
    answer = numbers[idx % numbers_len];
    
    return answer;
}