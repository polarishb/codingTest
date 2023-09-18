#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    bool check = false;
    int len = 0;
    int idx = 0;
    for(int i = 0; i < strlen(my_string); i++){
        if(my_string[i] != ' ' && check == false){
            check = true;
            len++;
        }
        else if(my_string[i] != ' ' && check == true){
            continue;
        }
        else{
            check = false;
        }
    }
    
    char* str = (char*)malloc(sizeof(char) * (strlen(my_string) + 1));
    memset(str, '\0', sizeof(char) * (strlen(my_string) + 1));
    
    check = false;
    for(int i = 0; i < strlen(my_string); i++){
        if(my_string[i] == ' ' && check == true){
            check = false;
            str[idx] = my_string[i];
            idx++;
        }
        else if(my_string[i] == ' ' && check == false){
            continue;
        }
        else{
            check = true;
            str[idx] = my_string[i];
            idx++;
        }
        
    }
    
    strtok(str, " ");
    char** answer = (char**)malloc(sizeof(char*) * len);
    for(int i = 0; i < len; i++){
        answer[i] = (char*)malloc(sizeof(char) * (strlen(str) + 1));
        memset(answer[i], '\0', sizeof(char) * (strlen(str) + 1));
        memcpy(answer[i], str, sizeof(char) * (strlen(str) + 1));
        str = strtok(NULL, " ");
    }
    return answer;
}