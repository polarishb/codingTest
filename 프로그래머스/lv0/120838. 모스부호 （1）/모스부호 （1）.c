#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* morse[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....",
        "..",".---","-.-",".-..","--","-.","---",".--.","--.-",
        ".-.","...","-","..-","...-",".--","-..-","-.--","--.."
    };
    
    char cnvMorse[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
        'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
        'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    };
    
    char* str = (char*)malloc(sizeof(char) * (strlen(letter) + 1));
    memcpy(str, letter, sizeof(char) * (strlen(letter) + 1));
    
    int len = 1;
    for (int i = 0; i < strlen(letter); i++) {
        if (letter[i] == ' ') len++;
    }
    
    int idx = 0;
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    memset(answer, '\0', sizeof(char) * (len + 1));
    
    char* ptr = NULL;
    ptr = strtok(str, " ");
    
    while(ptr){
        for(int i = 0; i < sizeof(morse) / sizeof(morse[0]); i++){
            if(strncmp(ptr, morse[i], strlen(ptr)+1) == 0){
                answer[idx++] = cnvMorse[i];
                break;
            }
        }
        ptr = strtok(NULL, " ");
    }
    
    return answer;
}