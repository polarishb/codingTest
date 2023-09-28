#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    bool plus = false;
    bool minus = false;
    
    char* str = (char*)malloc(sizeof(char) * (strlen(my_string) + 1));
    memcpy(str, my_string, sizeof(char) * (strlen(my_string) + 1));
    
    char* ptr = strtok(str, " ");
    int idx = 0;
    
    answer += atoi(ptr);
    ptr = strtok(NULL, " ");
    
    while(ptr){
        if(*ptr == '+'){
            plus = true;
            ptr = strtok(NULL, " ");
        }
        else if(*ptr == '-'){
            minus = true;
            ptr = strtok(NULL, " ");
        }
        
        if(plus) answer += atoi(ptr);
        else if(minus) answer -= atoi(ptr);
        
        plus = false;
        minus = false;
        ptr = strtok(NULL, " ");
    }
    
    return answer;
}