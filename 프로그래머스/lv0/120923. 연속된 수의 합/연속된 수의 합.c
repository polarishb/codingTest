#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * num);
    memset(answer, 0, sizeof(int) * num);
    int idx = (num - 1) / 2;
    
    for(int i = 0; i < num; i++){
        answer[i] = (total / num) - idx + i;
    }
    
    
    return answer;
}