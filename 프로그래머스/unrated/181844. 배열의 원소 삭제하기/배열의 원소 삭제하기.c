#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// delete_list_len은 배열 delete_list의 길이입니다.
int* solution(int arr[], size_t arr_len, int delete_list[], size_t delete_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count = 0;
    bool check = false;
    int idx = 0;
    for(int i = 0; i < arr_len; i++){
        for(int j = 0; j < delete_list_len; j++){
            if(arr[i] == delete_list[j])
                count++;
        }
    }
    
    int* answer = (int*)malloc(sizeof(int) * (arr_len - count));
    memset(answer, '\0', sizeof(int) * (arr_len - count));
    
    for(int i = 0; i < arr_len; i++){
        check = true;
        for(int j = 0; j < delete_list_len; j++){
            if(arr[i] == delete_list[j]){
                check = false;
                break;
            }
        }
        if(check){
            answer[idx] = arr[i];
            idx++;
        }
    }
    
    return answer;
}