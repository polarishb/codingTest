#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    int idx = 0;
    
    char* str = (char*)malloc(sizeof(char) * (strlen(pat) + 1));
    memset(str, '\0', sizeof(char) * (strlen(pat) + 1));
    
    for(int i = 0; i <= strlen(myString) - strlen(pat); i++){
        for(int j = i; j < i + strlen(pat); j++){
            str[idx++] = myString[j];
        }
        idx = 0;
        if(strcmp(str, pat) == 0) answer++;
    }
    
    return answer;
}