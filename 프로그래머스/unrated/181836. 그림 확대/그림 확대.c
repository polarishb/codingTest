#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// picture_len은 배열 picture의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* picture[], size_t picture_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * (picture_len * k));
    int arr_len = strlen(picture[0]);
    for(int i = 0; i < picture_len * k; i++){
        answer[i] = (char*)malloc(sizeof(char*) * (arr_len * k + 1));
        memset(answer[i], '\0', sizeof(char) * (arr_len * k + 1));
    }
    
    for (int i = 0; i < picture_len; i++) {
        for (int j = 0; j < arr_len; j++) {
            for (int t = 0; t < k; t++) {
                answer[i * k][j * k + t] = picture[i][j];
            }
        }
        for (int t = 1; t < k; t++) {
            memcpy(answer[i * k + t], answer[i * k], sizeof(char) * (arr_len * k + 1));
        }
    }

    return answer;
}