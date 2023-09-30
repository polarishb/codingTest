#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* polynomial) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (strlen(polynomial) + 1));
    memcpy(answer, polynomial, sizeof(char) * (strlen(polynomial) + 1));
    
    int arr[2] = {0};
    
    char* ptr = strtok(answer, " + ");
    
    while(ptr){
        if(ptr[strlen(ptr) - 1] == 'x'){
            if(ptr[0] == 'x') arr[0]++;
            else arr[0] += atoi(ptr);
        }
        else{
            arr[1] += atoi(ptr);
        }
        ptr = strtok(NULL, " + ");
    }
    
    int idx = 0;
    
    while(arr[0] || arr[1]){
        while(arr[1]){
            answer[idx++] = arr[1] % 10 + '0';
            arr[1] /= 10;
        }
        if(idx != 0 && arr[0] != 0){
            answer[idx++] = ' ';
            answer[idx++] = '+';
            answer[idx++] = ' ';
        }
        if(arr[0] == 1){
            answer[idx++] = 'x';
            arr[0] /= 10;
        }
        else if(arr[0] > 1){
            answer[idx++] = 'x';
            while(arr[0]){
                answer[idx++] = arr[0] % 10 + '0';
                arr[0] /= 10;
            }
        }
        
        
        answer[idx] = '\0';
    }
    
    for(int i = 0; i < strlen(answer) / 2; i++){
        answer[i] ^= answer[idx - i - 1];
        answer[idx - i - 1] ^= answer[i];
        answer[i] ^= answer[idx - i - 1];
    }
    
    return answer;
}