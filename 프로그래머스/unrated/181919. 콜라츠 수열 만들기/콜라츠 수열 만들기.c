#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    int len = 0;
    int idx = 0;
    int temp = n;
    
    while(temp != 1){
        temp = temp % 2 ? 3 * temp + 1 : temp / 2;
        len++;
    }
    
    int* answer = (int*)malloc(sizeof(int) * (len + 1));
    
    while(n != 1){
        answer[idx] = n;
        n = n % 2 ? 3 * n + 1 : n / 2;
        idx++;
    }
    
    answer[idx] = 1;
    
    return answer;
}