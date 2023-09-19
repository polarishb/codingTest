#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myStr) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = 1;
    bool check = false;
    char* str = (char*)malloc(sizeof(char) * (strlen(myStr) + 1));
    memset(str, '\0', sizeof(char) * (strlen(myStr) + 1));
    strcpy(str, myStr);

    for (int i = 0; i < strlen(myStr); i++) {
        if (myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
            str[i] = ' ';
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            str = &str[i];
            break;
        }
    }

    if (str[0] != ' ') {
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] != ' ' && check) {
                size++;
                check = false;
            }
            else if (str[i] == ' ' && !check) {
                check = true;
            }
        }
    }

    char** answer = (char**)malloc(sizeof(char*) * size);

    str = strtok(str, " ");

    if (str) {
        for (int i = 0; i < size; i++) {
            answer[i] = (char*)malloc(sizeof(char) * (strlen(str) + 1));
            memset(answer[i], '\0', sizeof(char) * (strlen(str) + 1));
            memcpy(answer[i], str, sizeof(char) * (strlen(str) + 1));
            str = strtok(NULL, " ");
        }
    }
    else
        answer[0] = "EMPTY";

    
    return answer;
}