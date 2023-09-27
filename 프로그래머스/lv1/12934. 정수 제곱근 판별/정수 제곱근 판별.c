#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;
    
    if(sqrt(n) == (int)sqrt(n)){
        answer = (long long)pow(sqrt(n) + 1, 2);
    }
    
    return answer;
}