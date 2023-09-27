#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    while(order){
        if(order % 10 && !(order % 10 % 3)) answer++;
        order /= 10;
    }
    return answer;
}