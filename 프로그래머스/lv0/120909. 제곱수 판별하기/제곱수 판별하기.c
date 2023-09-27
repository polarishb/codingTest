#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= 1000; i++){
        if(n == pow(i, 2)) return 1;
    }
    
    return 2;
}