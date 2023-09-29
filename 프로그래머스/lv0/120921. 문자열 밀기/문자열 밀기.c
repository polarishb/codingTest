#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* A, const char* B) {
    int answer = 0;
    bool check = false;
    int* arr = (int*)malloc(sizeof(int) * strlen(A));
    
    for(int i = 0; i < strlen(A); i++){
        for(int j = 0; j < strlen(A); j++){
            if(A[j] == B[(i + j) % strlen(A)]){
                check = true;
                continue;
            }
            else{
                check = false;
                break;
            }
        }
        if(!check) answer++;
        else return answer;
    }
    answer = -1;
    
    return answer;
}