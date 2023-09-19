#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* strArr[], size_t strArr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = strArr_len;
    int idx = 0;
    for(int i = 0; i < strArr_len; i++){
        if(strstr(strArr[i], "ad"))
            size--;
    }
    
    char** answer = (char**)malloc(sizeof(char*) * size);
    for(int i = 0; i < strArr_len; i++){
        if(!strstr(strArr[i], "ad")){
            answer[idx] = (char*)malloc(sizeof(char) * (strlen(strArr[i]) + 1));
            memset(answer[idx], '\0', sizeof(char) * (strlen(strArr[i]) + 1));
            strcpy(answer[idx], strArr[i]);
            idx++;
        }
    }
    
    return answer;
}