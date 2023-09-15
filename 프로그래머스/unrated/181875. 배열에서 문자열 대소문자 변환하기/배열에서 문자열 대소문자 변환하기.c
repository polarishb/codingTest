#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* strArr[], size_t strArr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * (strArr_len));
    for(int i = 0; i < strArr_len; i++){
        answer[i] = (char*)malloc(sizeof(char) * (strlen(strArr[i]) + 1));
        memset(answer[i], '\0', sizeof(char) * (strlen(strArr[i]) + 1));
    }
    
    for(int i = 0; i < strArr_len; i ++){
        if(i % 2 == 0 ){
            for(int j = 0; j < strlen(strArr[i]); j++){
                answer[i][j] = tolower(strArr[i][j]);
            }
        }
        else{
            for(int j = 0; j < strlen(strArr[i]); j++){
                answer[i][j] = toupper(strArr[i][j]);
            }
        }
    }

    
    return answer;
}