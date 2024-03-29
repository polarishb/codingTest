#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 100);
    memset(answer, 0, sizeof(int) * 100);
    int num = 2;
    int idx = 0;
    
    while(n > 1){
        if(!(n % num)){
            answer[idx++] = num;
            while(!(n % num)){
                n /= num;
            }
        }
        num++;
    }
    
    answer = realloc(answer, sizeof(int) * idx);
    
    return answer;
}