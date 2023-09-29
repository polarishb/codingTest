#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* A, const char* B) {
    int answer = 0;
    
    for(int i = 0; i < strlen(A); i++){
        if(!strncmp(A, &B[i], strlen(A) - i) && !strncmp(&A[strlen(A) - i], B, i)){
            return i;
        }
    }
    answer = -1;
    
    return answer;
}