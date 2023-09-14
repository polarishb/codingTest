#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int l, int r) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int idx = 0;
    int buf = 0;
    
    int* answer = (int*)malloc(sizeof(int) * 100);
    for(int i = 0; i < 100; i++){
        answer[i] = 0;
    }
    
    for(int i = l; i <= r; i++){
        buf = i;
        while(buf != 0){
            if(buf % 10 == 5 || buf % 10 == 0)
                buf = buf / 10;
            else
                break;
        }
        if(buf == 0){
            answer[idx] = i;
            idx++;
        }
    }
        
    if(!(answer[0])) answer[0] = -1;
    
    return answer;
}