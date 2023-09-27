#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(void* a, void* b){
    return *(char*)a > *(char*)b;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int answer = 1;
    
    char* str1 = (char*)malloc(sizeof(char) * (strlen(before) + 1));
    memcpy(str1, before, sizeof(char) * (strlen(before) + 1));
    char* str2 = (char*)malloc(sizeof(char) * (strlen(after) + 1));
    memcpy(str2, after, sizeof(char) * (strlen(after) + 1));
    
    qsort(str1, strlen(str1), sizeof(char), compare);
    qsort(str2, strlen(str2), sizeof(char), compare);
    
    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] != str2[i]){
            answer = 0;
            break;
        }
    }
    return answer;
}