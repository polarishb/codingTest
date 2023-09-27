#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (strlen(my_string) + 1));
    memset(answer, '\0', sizeof(char) * (strlen(my_string) + 1));
    
    for(int i = 0; i < strlen(my_string); i++){
        if(my_string[i] < 'a') answer[i] = tolower(my_string[i]);
        else answer[i] = toupper(my_string[i]);
    }
    return answer;
}