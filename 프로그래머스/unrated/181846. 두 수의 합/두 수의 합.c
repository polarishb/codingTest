#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* a, const char* b) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    bool up = false;
    
    char* numA = (char*)malloc(sizeof(char) * (len + 1));
    char* numB = (char*)malloc(sizeof(char) * (len + 1));
    memset(numA, '0', sizeof(char) * (len + 1));
    memset(numB, '0', sizeof(char) * (len + 1));
    
    strcpy(&numA[len-strlen(a)], a);
    strcpy(&numB[len-strlen(b)], b);
    
    for (int i = len - 1; i >= 0; i--) {
        if (numA[i] - '0' + numB[i] - '0' >= 10) {
            up = true;
        }
        else if (numA[i] - '0' + numB[i] - '0' < 9 && up) {
            up = false;
        }
        else if (numA[i] - '0' + numB[i] - '0' == 9 && up) {
            up = true;
        }
    }

    if (up) {
        len++;
        up = false;
    }

    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    memset(answer, '0', sizeof(char) * len);
    answer[len] = '\0';

    int idx = len - 1;
    for (int i = strlen(numA) - 1; i >= 0; i--) {
        if (numA[i] - '0' + numB[i] - '0' >= 10) {
            answer[idx--] += ((numA[i] - '0' + numB[i] - '0') % 10);
            answer[idx]++;
            up = true;
        }
        else if (numA[i] - '0' + numB[i] - '0' < 9 && up) {
            answer[idx--] += (numA[i] - '0' + numB[i] - '0');
            up = false;
        }
        else if (numA[i] - '0' + numB[i] - '0' == 9 && up) {
            answer[idx--] = '0';
            answer[idx]++;
            up = true;
        }
        else {
            answer[idx--] += (numA[i] - '0' + numB[i] - '0');
        }
    }
    
    return answer;
}