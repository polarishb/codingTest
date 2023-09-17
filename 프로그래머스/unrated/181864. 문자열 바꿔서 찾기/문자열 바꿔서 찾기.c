#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    
    char* revString = (char*)malloc(sizeof(char) * (strlen(myString) + 1));
    memset(revString, '\0', sizeof(char) * (strlen(myString) + 1));
    
    for(int i = 0; i < strlen(myString); i++){
        if(myString[i] == 'A')
            revString[i] = 'B';
        else
            revString[i] = 'A';
    }
    
    answer = strstr(revString, pat) ? 1 : 0;
    
    return answer;
}