#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// names_len은 배열 names의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* names[], size_t names_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * (names_len - 1) / 5 + 1);
    for(int i = 0; i < (names_len - 1) / 5 + 1; i++){
        answer[i] = (char*)malloc(sizeof(char*) * (strlen(names[i * 5]) + 1));
        memset(answer[i], '\0', sizeof(char*) * (strlen(names[i * 5]) + 1));
        memcpy(answer[i], names[i * 5], sizeof(char*) * (strlen(names[i * 5]) + 1));
    }
    
    return answer;
}