#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int length = 0;
    
    while(!n){
        n /= 10;
        length++;
    }
    
    char* answer = (char*)malloc(sizeof(char) * (length + 1));
    memset(answer, '\0', sizeof(char) * (length + 1));
    
    sprintf(answer, "%d", n);
    
    return answer;
}