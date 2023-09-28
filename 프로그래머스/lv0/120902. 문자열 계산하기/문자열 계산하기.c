#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    
    char* str = (char*)malloc(sizeof(char) * (strlen(my_string) + 1));
    memcpy(str, my_string, sizeof(char) * (strlen(my_string) + 1));
    
    char* ptr = strtok(str, " ");
    
    answer += atoi(ptr);
    ptr = strtok(NULL, " ");
    
    while(ptr){
        if(*ptr == '+'){
            ptr = strtok(NULL, " ");
            answer += atoi(ptr);
        }
        else if(*ptr == '-'){
            ptr = strtok(NULL, " ");
            answer -= atoi(ptr);
        }
        
        ptr = strtok(NULL, " ");
    }
    
    return answer;
}