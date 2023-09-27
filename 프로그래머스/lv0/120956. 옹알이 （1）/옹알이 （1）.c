#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    char* posible[] = {"aya", "ye", "woo", "ma"};
    char* ptr = NULL;
    bool check = true;
    
    char** str = (char**)malloc(sizeof(char) * babbling_len);
    for (int i = 0; i < babbling_len; i++) {
        str[i] = (char*)malloc(sizeof(char) * (strlen(babbling[i]) + 1));
        memcpy(str[i], babbling[i], sizeof(char) * (strlen(babbling[i]) + 1));
        
        for(int j = 0; j < sizeof(posible) / sizeof(posible[0]); j++){
            ptr = strstr(str[i], posible[j]);
            if (ptr) {
                for (int k = 0; k < strlen(posible[j]); k++) {
                    *ptr++ = '0';
                }
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