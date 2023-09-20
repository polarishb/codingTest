#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// str_list_len은 배열 str_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* str_list[], size_t str_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    bool check = false;
    char** str = (char**)malloc(sizeof(char*) * str_list_len);
    for(int i = 0; i < str_list_len; i++){
        str[i] = (char*)malloc(sizeof(char) * 2);
        memset(str[i], '\0', sizeof(char) * 2);
        memcpy(str[i], str_list[i], sizeof(char) * 2);
    }
    
    
    for(int i = 0; i < str_list_len; i++){
        if(str[i][0] == 'l'){
            str[i][0] = '\0';
            check = true;
            break;
        }
        else if(str[i][0] == 'r'){
            str = &str[i+1];
            check = true;
            break;
        }
    }
    
    char** answer = str;
    
    if(!check) return '\0';
    
    return answer;
}