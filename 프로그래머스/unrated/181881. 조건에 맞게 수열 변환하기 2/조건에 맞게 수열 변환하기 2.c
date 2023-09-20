#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    bool check = true;
    int temp = 0;
    
    while(++answer){
        check = true;
        for(int i = 0; i < arr_len; i++){
            temp = arr[i];
            
            if(arr[i] < 50 && arr[i] % 2 == 1){
                arr[i] *= 2;
                arr[i] += 1;
            }
            else if(arr[i] >= 50 && arr[i] % 2 == 0){
                arr[i] /= 2;
            }
            
            if(temp != arr[i]) check = false;
            
        }
        
        if(check) return answer - 1;
    }

    
    return -1;
}