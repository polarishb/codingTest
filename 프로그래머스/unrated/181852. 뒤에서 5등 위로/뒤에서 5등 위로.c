#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (num_list_len - 5));
    memset(answer, 0, sizeof(int) * (num_list_len - 5));
    
    for(int i = 0; i < num_list_len - 1; i++){
        for(int j = i + 1; j < num_list_len; j++){
            if(num_list[i] > num_list[j]){
                num_list[i] = num_list[i] ^ num_list[j];
                num_list[j] = num_list[i] ^ num_list[j];
                num_list[i] = num_list[i] ^ num_list[j];
            }
        }
    }
    
    for(int i = 0; i < num_list_len - 5; i++){
        answer[i] = num_list[i+5];
    }
    
    return answer;
}