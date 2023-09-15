#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int length = 0;
    long long num = n;
    
    while(num){
        num /= 10;
        length++;
    }
    
    int* answer = (int*)malloc(sizeof(int) * length);
    memset(answer, 0, sizeof(int) * length);
    
    for(int i = 0; i < length; i++){
        answer[i] = n % 10;
        n /= 10;
    }
    
    return answer;
}