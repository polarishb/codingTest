#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++){
        answer++;
        while(answer % 3 == 0 || answer % 10 == 3 || answer / 10 % 10 == 3){
            answer++;
        }     
    }
    return answer;
}