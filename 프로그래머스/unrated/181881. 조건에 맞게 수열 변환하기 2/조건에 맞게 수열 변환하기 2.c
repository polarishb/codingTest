#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    bool* check = (bool*)malloc(sizeof(bool) * arr_len + 1);
    memset(check, true, sizeof(bool) * arr_len + 1);
    
    while(check[arr_len]){
        for(int i = 0; i < arr_len; i++){
            if(arr[i] < 50 && arr[i] % 2 == 1){
                arr[i] *= 2;
                arr[i] += 1;
            }
            else if(arr[i] >= 50 && arr[i] % 2 == 0){
                arr[i] /= 2;
            }
            else{
                check[i] = false;
            }
        }
        
        for(int i = 0; i < arr_len; i++){
            if(check[i]){
                check[arr_len] = true;
                break;
            }
            else
                check[arr_len] = false;
        }
        answer++;
    }

    
    return answer - 1;
}