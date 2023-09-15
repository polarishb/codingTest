#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rny_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count = 0;
    int idx = 0;
    for(int i = 0 ; i < strlen(rny_string); i++){
        if(rny_string[i] == 'm') count++;
    }
    
    char* answer = (char*)malloc(sizeof(char) * (strlen(rny_string) + count + 1));
    
    for(int i = 0; i < strlen(rny_string) + count + 1; i++){
        answer[i] = '\0';
    }
    
    for(int i = 0; i < strlen(rny_string); i++){
        if(rny_string[i] == 'm'){
            answer[idx] = 'r';
            answer[idx+1] = 'n';
            idx += 2;
        }
        else{
            answer[idx] = rny_string[i];
            idx++;
        }
            
    }
    
    return answer;
}