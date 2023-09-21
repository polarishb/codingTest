#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * k);
    memset(answer, -1, sizeof(int) * k);
    int idx = 0;
    bool check = false;
    
    for(int i = 0; i < arr_len; i++){
        if(idx == 0) answer[idx++] = arr[i];
        for(int j = 0; j < idx; j++){
            if(answer[j] == arr[i]){
                check = false;
                break;
            }
            else check = true;
        }
        if(check) answer[idx++] = arr[i];
        if(idx == k) break;
    }
    
    return answer;
}