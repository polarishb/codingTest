#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    int count = 0;
    
    if(strlen(pat) > strlen(myString))
        return 0;
    
    for(int i = 0; i <= strlen(myString) - strlen(pat); i++){
        count = 0;
        for(int j = 0; j < strlen(pat); j++){
            if(tolower(myString[i+j]) == tolower(pat[j]))
                count++;
        }
        
        if(count == strlen(pat))
            return 1;
    }
    
    return 0;
}