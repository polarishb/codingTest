#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    for(; i <= j; i++){
        for(int j = i;j; j /= 10){
            if(j % 10 == k) answer++;
        }
    }
    
    return answer;
}