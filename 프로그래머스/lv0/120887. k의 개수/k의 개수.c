#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    int temp[6] = {0,};
    for(; i <= j; i++){
        int num = i;
        for(int j = 0; j < 6 && num; j++){
            temp[j] = num % 10;
            if(temp[j] == k) answer++;
            num /= 10;
        }
    }
    
    return answer;
}