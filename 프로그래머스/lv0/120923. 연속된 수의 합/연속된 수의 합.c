#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * num);
    memset(answer, 0, sizeof(int) * num);
    int idx = num / 2;
    
    for(int i = 0; i < num; i++){
        answer[i] = total / num;
    }
    
    if(num % 2){
        for(int i = idx; i > 0; i--){
            answer[num / 2 + i] += i;
            answer[num / 2 - i] -= i;
        }
    }
    else{
        for(int i = 0; i < idx * 2; i++){
            answer[i] = (total / num) - idx + 1 + i;
        }
    }
    
    
    return answer;
}