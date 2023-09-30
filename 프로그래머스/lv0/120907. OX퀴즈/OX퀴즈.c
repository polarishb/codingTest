#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// quiz_len은 배열 quiz의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* quiz[], size_t quiz_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* ptr = NULL;
    int num[3] = {0};
    int idx = 0;
    int op = 0;
    char** answer = (char**)malloc(sizeof(char*) * quiz_len);
    for(int i = 0; i < quiz_len; i++){
        answer[i] = (char*)malloc(sizeof(char) * 2);
        memset(answer[i], '\0', sizeof(char) * 2);
        
        ptr = strtok(quiz[i], " ");
        idx = 0;
        
        while(ptr){
            if(!atoi(ptr) && ptr[0] != '0'){
                if(ptr[0] == '-'){
                    op = 0;
                }
                else if(ptr[0] == '+'){
                    op = 1;
                }
            }
            else{
                num[idx++] = atoi(ptr);
            }
            ptr = strtok(NULL, " ");
        }
        
        if(op){
            answer[i][0] = num[0] + num[1] == num[2] ? 'O' : 'X';
        }
        else{
            answer[i][0] = num[0] - num[1] == num[2] ? 'O' : 'X';
        }
    }
    
    
    return answer;
}