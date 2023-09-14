#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int l, int r) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int idx = 0;
    bool check = true;
    
    int* answer = (int*)malloc(sizeof(int) * 100);
    for(int i = 0; i < 100; i++){
        answer[i] = 0;
    }
    
    for(int i = l; i <= r; i++){
        if(i % 10 == 5 || i % 10 == 0){
            int len = 0;
            int buf = i;
            while(buf != 0){
                buf /= 10;
                len++;
            }
            char* temp = (char*)malloc(sizeof(char) * len + 1);
            sprintf(temp, "%d", i);
            for(int j = 0; j < len; j++){
                if(temp[j] != '5' && temp[j] != '0'){
                    check = false;
                }
            }
            free(temp);
            
            if(check){
                answer[idx] = i;
                idx++;
            }
        }
        check = true;
    }
    if(!(answer[0])) answer[0] = -1;
    
    return answer;
}