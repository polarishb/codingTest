#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = 0;
    int idx = 0;
    
    for(int i = 1; i <= n; i++){
        answer++;
        num = answer;
        idx = 0;
        while(num /= 10){
            idx++;
        }
        num = answer;
        while(num){
            if(!(answer % 3)){
                answer++;
            }
            for(;idx+1;idx--){
                while((answer / (int)pow(10, idx)) % 10 == 3){
                    answer++;
                }
            }
            num /= 10;
        }        
    }
    return answer;
}