#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// rank_len은 배열 rank의 길이입니다.
// attendance_len은 배열 attendance의 길이입니다.
int solution(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {
    int answer = 0;
    int idx = 0;
    
    int* arr = (int*)malloc(sizeof(int) * rank_len);
    
    for(int i = 0; i < rank_len; i++){
        for(int j = 0; j < rank_len; j++){
            if(rank[j] == i+1){
                arr[i] = j;
                break;
            }
        }
        if(attendance[arr[i]] && idx < 3){
                answer += arr[i] * 10000 / (int)pow(100, idx++);
        }
    }
    
    return answer;
}