#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer;
    switch(n){
        case 1:
            answer = (int*)malloc(sizeof(int) * (slicer[1] + 1));
            for(int i = 0; i < slicer[1] + 1; i++){
                answer[i] = num_list[i];
            }
            break;
        case 2:
            answer = (int*)malloc(sizeof(int) * (num_list_len - slicer[0]));
            for(int i = 0; i < num_list_len - slicer[0]; i++){
                answer[i] = num_list[i+slicer[0]];
            }
            break;
        case 3:
            answer = (int*)malloc(sizeof(int) * (slicer[1] - slicer[0] + 1));
            for(int i = slicer[0]; i <= slicer[1]; i++){
                answer[i-slicer[0]] = num_list[i];
            }
            break;
        case 4:
            answer = (int*)malloc(sizeof(int) * (slicer[1] / slicer[2] + 1));
            for(int i = 0; i < slicer[1] / slicer[2] + 1; i ++){
                answer[i] = num_list[i*slicer[2]+slicer[0]];
            }
            break;
    }
    
    return answer;
}