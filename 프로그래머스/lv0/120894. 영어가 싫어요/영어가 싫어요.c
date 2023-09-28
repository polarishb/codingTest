#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    long long answer = 0;
    int idx = 0;
    char* ptr = numbers;
    
    
    while(*ptr != '\0'){
        printf("%s\n", ptr);
        answer *= 10;
        if(strncmp(ptr, "zero", 4) == 0){
            answer += 0;
            ptr += 4;
        }
        else if(strncmp(ptr, "one", 3) == 0){
            answer += 1;
            ptr += 3;
        }
        else if(strncmp(ptr, "two", 3) == 0){
            answer += 2;
            ptr += 3;
        }
        else if(strncmp(ptr, "three", 5) == 0){
            answer += 3;
            ptr += 5;
        }
        else if(strncmp(ptr, "four", 4) == 0){
            answer += 4;
            ptr += 4;
        }
        else if(strncmp(ptr, "five", 4) == 0){
            answer += 5;
            ptr += 4;
        }
        else if(strncmp(ptr, "six", 3) == 0){
            answer += 6;
            ptr += 3;
        }
        else if(strncmp(ptr, "seven", 5) == 0){
            answer += 7;
            ptr += 5;
        }
        else if(strncmp(ptr, "eight", 5) == 0){
            answer += 8;
            ptr += 5;
        }
        else if(strncmp(ptr, "nine", 4) == 0){
            answer += 9;
            ptr += 4;
        }
    }
    
    
    return answer;
}