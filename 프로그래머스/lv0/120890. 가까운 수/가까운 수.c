#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

int compare(void* a, void* b){
    return *(int*)a > *(int*)b;
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = INT_MAX;
    
    qsort(array, array_len, sizeof(int), compare);
    
    for(int i = 0; i < array_len; i++){
        if(abs(answer - n) > abs(array[i] - n)) answer = array[i];
    }
    
    return answer;
}