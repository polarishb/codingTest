#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString, const char* pat) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (strlen(myString) + 1));
    memset(answer, '\0', sizeof(char) * (strlen(myString) + 1));
    memcpy(answer, myString, sizeof(char) * (strlen(myString) + 1));
    
    char* ptr = answer;
    char* temp = NULL;
    
    while(ptr){
        ptr = strstr(ptr, pat);
        if(ptr){
            temp = ptr;
            ptr++;
        }
    }
    
    temp[strlen(pat)] = '\0';
    
    return answer;
}