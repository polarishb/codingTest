#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    
    int answer = (num % n) == 0 ? 1 : 0;
    
    return answer;
}