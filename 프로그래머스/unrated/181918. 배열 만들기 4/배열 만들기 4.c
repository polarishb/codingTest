#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* stk = (int*)malloc(sizeof(int) * arr_len);
    for(int i = 0; i < arr_len; i++){
        stk[i] = 0;
    }
    
    int lastIdx = 0;
    int idx = 0;
    
    while(idx < arr_len){
        if(stk[0] == 0){
            stk[lastIdx] = arr[idx];
            idx++;
            lastIdx++;
        }
        else if(lastIdx){
             if(stk[lastIdx-1] < arr[idx]){
                  stk[lastIdx] = arr[idx];
                   idx++;
                    lastIdx++;
             }
             else{
                 stk[lastIdx-1] = 0;
                 lastIdx--;
             }
          }
    }
    
    return stk;
}