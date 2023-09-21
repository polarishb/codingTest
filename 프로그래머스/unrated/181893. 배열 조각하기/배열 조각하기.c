#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// query_len은 배열 query의 길이입니다.
int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    memset(answer, 0, sizeof(int) * arr_len);
    memcpy(answer, arr, sizeof(int) * arr_len);
    
    for(int i = 0; i < query_len; i++){
        if(i % 2 == 0){
            for(int j = query[i] + 1; j == query[i] + 1; j++){
                answer[j] = 0;
            }
        }
        else{
            answer = &answer[query[i]];
        }
    }
    
    return answer;
}