#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(void *a, void *b){
    return *(int*)a > *(int*)b;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * strlen(my_string));
    memset(answer, NULL, sizeof(int) * strlen(my_string));
    int idx = 0;
    for(int i = 0; i < strlen(my_string); i++){
        if(my_string[i] <= '9') answer[idx++] = my_string[i] - '0';
    }
    qsort(answer, idx, sizeof(int), compare);
    
    return answer;
}