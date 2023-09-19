#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// intStrs_len은 배열 intStrs의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int len = 0;
    int idx = 0;
    char* str = (char*)malloc(sizeof(char) * (l + 1));
    memset(str, '\0', sizeof(char) * (l + 1));
    
    int* numTemp = (int*)malloc(sizeof(int) * intStrs_len);
    memset(numTemp, 0, sizeof(int) * intStrs_len);
    char* temp = NULL;
    
    for(int i = 0; i < intStrs_len; i++){
        temp = &intStrs[i][s];
        strncpy(str, temp, sizeof(char) * l);
        numTemp[i] = atoi(str);
        if(numTemp[i] > k) len++;
    }
    
    int* answer = (int*)malloc(sizeof(int) * len);
    memset(answer, 0, sizeof(int) * len);
    
    for(int i = 0; i < intStrs_len; i++){
        if(numTemp[i] > k)
            answer[idx++] = numTemp[i];
    }
    
    return answer;
}