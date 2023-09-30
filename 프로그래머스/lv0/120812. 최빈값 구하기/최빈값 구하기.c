#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(void* a, void* b){
    return *(int*)a > *(int*)b;
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int idx = 0;
    for(int i = 0; i < array_len; i++){
        if(idx < array[i]) idx = array[i];
    }
    
    int num[1000] = {0};
    int* sortNum = (int*)malloc(sizeof(int) * (idx + 1));
    
    for(int i = 0; i < array_len; i++){
        num[array[i]]++;
    }
    
    memcpy(sortNum, num, sizeof(int) * (idx + 1));
    qsort(sortNum, (idx + 1), sizeof(int), compare);
    
    if(sortNum[idx] == sortNum[idx - 1]) return -1;
    for(int i = 0; i <= idx; i++){
        if(sortNum[idx] == num[i]) return i;
    }
}