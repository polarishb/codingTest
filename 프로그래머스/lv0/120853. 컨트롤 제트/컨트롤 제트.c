#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int num = 0;
    
    char* str = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    memcpy(str, s, sizeof(char) * (strlen(s) + 1));
    
    char* ptr = strtok(str, " ");
    
    while(ptr){
        if(*ptr == 'Z'){
            answer -= num;
        }
        else{
            num = atoi(ptr);
            answer += num;
        }
        ptr = strtok(NULL, " ");
    }
    return answer;
}