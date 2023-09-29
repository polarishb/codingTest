#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// keyinput_len은 배열 keyinput의 길이입니다.
// board_len은 배열 board의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* keyinput[], size_t keyinput_len, int board[], size_t board_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    memset(answer, 0, sizeof(int) * 2);
    
    char** ptr = keyinput ;
    
    for(int i = 0; i < keyinput_len; i++){
        if(!(strcmp(ptr[i], "up")) && answer[1] < board[1] / 2)
            answer[1]++;
        else if(!(strcmp(ptr[i], "down")) && answer[1] > board[1] / -2)
            answer[1]--;
        else if(!(strcmp(ptr[i], "left")) && answer[0] > board[0] / -2)
            answer[0]--;
        else if(!(strcmp(ptr[i], "right")) && answer[0] < board[0] / 2)
            answer[0]++;
    }
    
    return answer;
}