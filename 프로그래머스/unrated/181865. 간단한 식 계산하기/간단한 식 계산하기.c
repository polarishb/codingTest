#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* binomial) {
    int answer = 0;
    int a = 0;
    
    char* str = (char*)malloc(sizeof(char) * (strlen(binomial) + 1));
    strcpy(str, binomial);
    
    char* ptr = strtok(str, " ");
    a = atoi(ptr);
    
    ptr = strtok(NULL, " ");    
    if(*ptr == '+'){
        answer = a + atoi(strtok(NULL, " "));
    }
    else if(*ptr == '-'){
        answer = a - atoi(strtok(NULL, " "));
    }
    else{
        answer = a * atoi(strtok(NULL, " "));
    }
    
    return answer;
}