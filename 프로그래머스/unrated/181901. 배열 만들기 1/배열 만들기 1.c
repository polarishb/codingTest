#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (n / k));
    memset(answer, 0, sizeof(int) * (n / k));
    
    for(int i = 1; i <= n; i++){
        if(i % k == 0){
            answer[i/k-1] = i;
        }
    }
    
    return answer;
}