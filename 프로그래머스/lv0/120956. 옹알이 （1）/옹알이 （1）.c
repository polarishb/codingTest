#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    char** str = (char**)malloc(sizeof(char) * babbling_len);
    char* ptr = NULL;
    bool check = true;
    for (int i = 0; i < babbling_len; i++) {
        str[i] = (char*)malloc(sizeof(char) * (strlen(babbling[i]) + 1));
        memcpy(str[i], babbling[i], sizeof(char) * (strlen(babbling[i]) + 1));

        ptr = strstr(str[i], "aya");
        if (ptr) {
            for (int j = 0; j < 3; j++) {
                *ptr++ = '0';
            }
        }

        ptr = strstr(str[i], "ye");
        if (ptr) {
            for (int j = 0; j < 2; j++) {
                *ptr++ = '0';
            }
        }

        ptr = strstr(str[i], "woo");
        if (ptr) {
            for (int j = 0; j < 3; j++) {
                *ptr++ = '0';
            }
        }

        ptr = strstr(str[i], "ma");
        if (ptr) {
            for (int j = 0; j < 2; j++) {
                *ptr++ = '0';
            }
        }

        for (int j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] != '0') {
                check = false;
                break;
            }
        }

        if (check) answer++;
        check = true;
    }
    
    return answer;
}