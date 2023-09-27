#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int temp = NULL;
    int count = 0;
    while(n){
        temp = n;
        n--;
        for(int i = 1; i <= temp; i++){
            if(temp % i == 0) count++;
        }
        if(count > 2) answer++;
        count = 0;
    }
    return answer;
}