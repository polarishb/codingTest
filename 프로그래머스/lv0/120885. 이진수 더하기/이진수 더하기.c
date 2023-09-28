#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (strlen(bin1) + 2));
    memset(answer, '\0', sizeof(char) * (strlen(bin1) + 2));
    
    long num = atol(bin1) + atol(bin2);
    int numArr[11] = {0,};
    int idx = 0;
    
    while(num){
        numArr[idx] += num % 10;
        while(numArr[idx] > 1){
            numArr[idx + 1] += numArr[idx] / 2;
            numArr[idx] %= 2;
        }
        num /= 10;
        idx++;
    }
    
    for(int i = 0; i < 11; i++){
        num += numArr[i] * (long long)pow(10, i);
    }
    
    sprintf(answer, "%lld", num);
    
    return answer;
}