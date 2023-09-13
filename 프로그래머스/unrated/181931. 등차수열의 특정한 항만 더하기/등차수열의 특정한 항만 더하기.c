#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// included_len은 배열 included의 길이입니다.
int solution(int a, int d, bool included[], size_t included_len) {
    int answer = 0;
    int sum = a;
    
    answer = included[0] ? a : 0;
    
    for(int i = 1; i < included_len; i++){
        sum += d;
        if ( included[i] ) answer += sum;
    }
    return answer;
}