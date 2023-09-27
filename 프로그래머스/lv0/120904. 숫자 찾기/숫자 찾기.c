#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = -1;
    int idx = 0;
    
    while(num){
        if(num % 10 == k) answer = idx;
        num /= 10;
        idx++;
    }
    
    return answer >= 0 ? idx - answer : answer;
}