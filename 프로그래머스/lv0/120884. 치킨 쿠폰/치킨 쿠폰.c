#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int chicken) {
    int answer = 0;
    int left = 0;
    
    while(chicken > 9){
        answer += chicken / 10;
        left = chicken % 10;
        chicken /= 10;
        chicken += left;
    }
    return answer;
}