#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int i = a > b ? b : a;
    int j = a > b ? a : b;
    
    for(; i <= j; i++){
        answer += i;
    }
    return answer;
}