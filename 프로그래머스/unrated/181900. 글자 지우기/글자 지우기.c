#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(void* a, void* b){
    return *(int*)a > *(int*)b;
}

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string) - indices_len;
    int idx = 0;
    int idx2 = 0;
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    memset(answer, '\0', sizeof(char) * (len + 1));
    
    qsort(indices, indices_len, sizeof(int), compare);
    for(int i = 0; i < indices_len; i++){
        printf("%d ", indices[i]);
    }
    for(int i = 0; i < strlen(my_string); i++){
        if(i != indices[idx2]){
            answer[idx++] = my_string[i];
        }
        else if (i == indices[idx2]){
            idx2++;
        }
    }
    
    return answer;
}