#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = 1;
    int idx = 0;
    char* temp = 0;
    bool check = false;
    
    char* str = (char*)malloc(sizeof(char) * (strlen(myString) + 1));
    memset(str, '\0', sizeof(char) * (strlen(myString) + 1));
    memcpy(str, myString, (strlen(myString) + 1));
    
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'x'){
            str = &str[i+1];
            if(*str != 'x') break;
        }
        else
            break;
    }
    
    printf("%s", str);
    
    for(int i = 0; i < strlen(str) - 1; i++){
        if(str[i] == 'x' && !check){
            size++;
            check = true;
        }
        else if(str[i] != 'x')
            check = false;
    }
    
    char* ptr = strtok(str, "x");
    
    char** answer = (char**)malloc(sizeof(char*) * size);
    for(int i = 0; i < size; i++){
        answer[i] = (char*)malloc(sizeof(char) * (strlen(str) + 1));
        memset(answer[i], '\0', sizeof(char) * (strlen(str) + 1));
        answer[i] = ptr;
        ptr = strtok(NULL, "x");
    }
    
    for(int i = 0; i < size - 1; i++){
        for(int j = i; j < size; j++){
            if(strcmp(answer[i], answer[j]) >= 0){
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }

    }
    
    return answer;
}