#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int ai = 0;
    int bi = 0;
    char* a = (char*)malloc(sizeof(char) * num_list_len + 1);
    char* b = (char*)malloc(sizeof(char) * num_list_len + 1);
    
    for(int i = 0; i < num_list_len; i++){
        a[i] = '\0';
        b[i] = '\0';
    }
    
    for(int i = 0; i < num_list_len; i++){
        if(num_list[i] % 2 == 0){
            a[ai] = num_list[i] + 48;
            ai++;
        }
        else{
            b[bi] = num_list[i] + 48;
            bi++;
        }
    }
    
    return answer = atoi(a) + atoi(b);
}