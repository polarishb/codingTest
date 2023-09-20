#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int idx = 0;
    
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    memset(answer, 0, sizeof(int) * arr_len);

    for (int i = 0; i < arr_len; i++) {
        if (idx == 0) {
            answer[idx++] = arr[i];
        }
        else if (answer[idx - 1] == arr[i]) {
            answer[--idx] = 0;
        }
        else {
            answer[idx++] = arr[i];
        }
    }
    if (idx == 0){
        answer = (int*)realloc(answer, sizeof(int));
        *answer = -1;
    }
    else answer = (int*)realloc(answer, sizeof(int) * idx);
    
    return answer;
}