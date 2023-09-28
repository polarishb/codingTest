#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    long long answer = 1;
    int idx = 1;
    
    for(int i = balls; i > share; i--){
        answer *= i;
        answer /= idx++;
    }
    
    return answer;
}