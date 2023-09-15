#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start, int end_num) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (start - end_num + 1));
    int num = start;
    for(int i = 0; i < start - end_num + 1; i++){
        answer[i] = num--;
    }
    
    return answer;
}