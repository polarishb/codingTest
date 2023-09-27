#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    long long sum = a + b;
    long long num = a > b ? a - b + 1 : b - a + 1;
    
    answer = sum * num / 2;
    
    return answer;
}