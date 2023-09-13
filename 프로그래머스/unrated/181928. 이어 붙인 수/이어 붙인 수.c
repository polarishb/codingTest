#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < num_list_len; i++){
        if(num_list[i] % 2 == 0){
            a = a * 10 + num_list[i];            
        }
        else
            b = b * 10 + num_list[i];
    }
    
    return answer = a + b;
}