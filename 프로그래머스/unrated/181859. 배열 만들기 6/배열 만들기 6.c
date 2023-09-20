#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = 0;
    int idx = 0;
    for (int i = 0; i < arr_len; i++) {
        if (len == 0) {
            len++;
        }
        else if (arr[i] == arr[len - 1]) {
            continue;
        }
        else {
            len++;
        }
    }
    
    int* answer = (int*)malloc(sizeof(int) * len);
    memset(answer, 0, sizeof(int) * len);

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
    if (idx == 0) answer[0] = -1;
    
    return answer;
}