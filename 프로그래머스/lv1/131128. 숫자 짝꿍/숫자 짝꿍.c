#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* X, const char* Y) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int length = strlen(X) >= strlen(Y) ? strlen(X) : strlen(Y);
    char* answer = (char*)malloc(sizeof(char) * (length + 1));
    for(int i = 0; i < length; i++){
        answer[i] = '\0';
    }
    
    int numX[10] = {0};
    int numY[10] = {0};
    int temp[10] = {0};
    
    int idx = 0;
    
    for(int i = 0; i < strlen(X); i++){
        switch(X[i]){
            case 48:
                numX[0]++;
                break;
            case 49:
                numX[1]++;
                break;
            case 50:
                numX[2]++;
                break;
            case 51:
                numX[3]++;
                break;
            case 52:
                numX[4]++;
                break;
            case 53:
                numX[5]++;
                break;
            case 54:
                numX[6]++;
                break;
            case 55:
                numX[7]++;
                break;
            case 56:
                numX[8]++;
                break;
            case 57:
                numX[9]++;
                break;
        }
    }
    
    for(int i = 0; i < strlen(Y); i++){
        switch(Y[i]){
            case 48:
                numY[0]++;
                break;
            case 49:
                numY[1]++;
                break;
            case 50:
                numY[2]++;
                break;
            case 51:
                numY[3]++;
                break;
            case 52:
                numY[4]++;
                break;
            case 53:
                numY[5]++;
                break;
            case 54:
                numY[6]++;
                break;
            case 55:
                numY[7]++;
                break;
            case 56:
                numY[8]++;
                break;
            case 57:
                numY[9]++;
                break;
        }
    }
    
    for(int i = 9; i >= 0; i--){
        while(numX[i] != 0 && numY[i] != 0){
            temp[i]++;
            numX[i]--;
            numY[i]--;
        }
    }
    
    for(int i = 9; i >= 0; i--){
        while(temp[i] != 0){
            answer[idx] = (char)(i + 48);
            if(answer[0] != '0') idx++;
            temp[i]--;
        }
    }
    
    if(answer[0] == NULL){
        answer = "-1";
    }
    
    return answer;
}