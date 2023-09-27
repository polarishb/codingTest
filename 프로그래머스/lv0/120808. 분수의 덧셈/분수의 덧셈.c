#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
        answer[1] = denom1 * denom2;
        answer[0] = numer1 * denom2 + numer2 * denom1;
    
    int gcd = 0;
    for(int i = 1; i <= answer[0] && i <= answer[1]; i++){
        if(answer[0] % i == 0 && answer[1] % i == 0) gcd = i;
    }
    
    answer[0] /= gcd;
    answer[1] /= gcd;
    
    return answer;
}