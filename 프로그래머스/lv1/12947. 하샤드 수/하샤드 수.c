#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int temp = x;
    int num = 0;
    while(temp){
        num += temp % 10;
        temp /= 10;
    }
    
    answer = x % num == 0 ? true : false;
    
    return answer;
}