#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    
    for(int i = 5; i > 0; i -= 2){
        answer += hp / i;
        hp %= i;
    }
    
    return answer;
}