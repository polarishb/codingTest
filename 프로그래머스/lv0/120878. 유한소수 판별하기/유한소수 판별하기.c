#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 1;
    int gcd = 1;
    int prime = 2;
    
    for(int i = 2; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    
    b /= gcd;
    
    while(b > 1){
        if(b % prime == 0){
            if(prime != 2 && prime != 5){
                answer = 2;
                break;
            }
            b /= prime;
        }
        else{
            prime++;
        }
    }
    
    return answer;
}