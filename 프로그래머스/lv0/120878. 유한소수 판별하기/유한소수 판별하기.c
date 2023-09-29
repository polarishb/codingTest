#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 2;

    while(!(b % 5)){
        b /= 5;
    }
    while(!(b % 2)){
        b /= 2;
    }
    
    if(!(a % b)) answer = 1;
    
    return answer;
}