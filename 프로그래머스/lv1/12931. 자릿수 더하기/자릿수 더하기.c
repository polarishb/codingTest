#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int num = n;
    
    while(num){
        answer += (num % 10);
        num = num / 10;
    }
    
    return answer;
}