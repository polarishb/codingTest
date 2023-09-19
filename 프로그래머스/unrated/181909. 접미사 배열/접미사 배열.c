#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a,const void* b){
    return strcmp(*(char**)a, *(char**)b);
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * strlen(my_string));
    for (int i = 0; i < strlen(my_string); i++) {
        answer[i] = (char*)malloc(sizeof(char) * (strlen(my_string) - i + 1));
        memset(answer[i], '\0', sizeof(char) * (strlen(my_string) - i + 1));
        for (int j = i; j < strlen(my_string); j++) {
            answer[i][j-i] = my_string[j];
        }
    }
    
    qsort(answer, strlen(my_string), sizeof(answer[0]), compare);
    
    return answer;
}