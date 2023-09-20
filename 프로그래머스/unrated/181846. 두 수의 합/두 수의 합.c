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

    strcpy(&numA[len - strlen(a)], a);
    strcpy(&numB[len - strlen(b)], b);

    int* arr = (int*)malloc(sizeof(int) * len);
    memset(arr, 0, sizeof(int) * len);

    for (int i = 0; i < len; i++) {
        arr[i] = numA[i] - '0' + numB[i] - '0';
    }

    for (int i = len - 1; i >= 0; i--) {
        if (arr[i] >= 10) {
            arr[i] -= 10;
            if (i != 0) arr[i - 1] += 1;
            else {
                up = true;
                len++;
            }
        }
    }

    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    memset(answer, '\0', sizeof(char) * (len + 1));
    int idx = len - 1;
    if (up) len--;
    for (int i = len - 1; i >= 0; i--) {
        answer[idx--] = arr[i] + '0';
    }
    if (up) answer[0] = '1';
    
    return answer;
}