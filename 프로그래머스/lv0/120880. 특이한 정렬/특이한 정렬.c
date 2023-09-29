#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(void* a, void* b){
    return *(int*)a > *(int*)b;
}

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * numlist_len);
    memset(answer, 0, sizeof(int) * numlist_len);
    
    int** arr = (int**)malloc(sizeof(int*) * numlist_len);
    for(int i = 0; i < numlist_len; i++){
        arr[i] = (int*)malloc(sizeof(int) * 2);
        arr[i][0] = abs(numlist[i] - n);
        arr[i][1] = numlist[i];
    }
    
    for(int i = 0; i < numlist_len - 1; i++){
        for(int j = i + 1; j < numlist_len; j++){
            if(arr[i][0] > arr[j][0]){
                arr[i][0] = arr[i][0] ^ arr[j][0];
                arr[j][0] = arr[i][0] ^ arr[j][0];
                arr[i][0] = arr[i][0] ^ arr[j][0];
                
                arr[i][1] = arr[i][1] ^ arr[j][1];
                arr[j][1] = arr[i][1] ^ arr[j][1];
                arr[i][1] = arr[i][1] ^ arr[j][1];
            }
        }
        
        if(i != 0 && arr[i][0] == arr[i-1][0]){
            if(arr[i][1] > arr[i-1][1]){
                arr[i][1] = arr[i][1] ^ arr[i-1][1];
                arr[i-1][1] = arr[i][1] ^ arr[i-1][1];
                arr[i][1] = arr[i][1] ^ arr[i-1][1];
            }
        }
    }
    
    for(int i = 0; i < numlist_len; i++){
        answer[i] = arr[i][1];
    }
    
    return answer;
}