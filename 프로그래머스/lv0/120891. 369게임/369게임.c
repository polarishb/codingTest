#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    while(order){
        switch(order % 10){
            case 3:
            case 6:
            case 9:
                answer++;
                break;
        }
        order /= 10;
    }
    return answer;
}