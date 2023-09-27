#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    if(price < 100000) answer = price;
    else if(price < 300000) answer = price * 0.95;
    else if(price < 500000) answer = price * 0.90;
    else answer = price * 0.80;
    return answer;
}