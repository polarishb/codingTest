#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; ;i++){
        if(6 * i % n == 0){
            return answer = i;
        }
    }
}