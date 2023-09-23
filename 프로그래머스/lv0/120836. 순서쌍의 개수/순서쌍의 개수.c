#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = n;
    
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            if(i * j == num){
                answer += 2;
                if(i == j) answer--;
                n = j;
                break;
            }
            
        }
    }
    return answer;
}