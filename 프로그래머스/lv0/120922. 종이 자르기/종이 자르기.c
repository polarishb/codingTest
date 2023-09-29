#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int M, int N) {
    int answer = 0;
    for(int i = 0; i < (M - 1) + (N - 1) * M; i++){
        answer++;
    }
    return answer;
}