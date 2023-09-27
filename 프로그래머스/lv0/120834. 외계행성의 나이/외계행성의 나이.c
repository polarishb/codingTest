#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = 0;
    int temp = age;
    while(temp){
        temp /= 10;
        len++;
    }
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    memset(answer, '\0', sizeof(char) * (len + 1));
    
    for(int i = len; i > 0; i--){
        answer[i - 1] = age % 10 + 'a';
        age /= 10;
    }
    return answer;
}