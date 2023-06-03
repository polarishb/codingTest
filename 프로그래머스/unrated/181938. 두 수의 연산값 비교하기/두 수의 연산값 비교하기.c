#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    int count = 0;
    int num = 0;
    int answer = 0;
    
    num = a;
    while(num>0){
        num/=10;
        count++;
    }
    char* num1 = (char*)malloc(sizeof(char) * count + 1);
    
    count = 0;
    num = b;
    while(num>0){
        num/=10;
        count++;
    }    
    char* num2 = (char*)malloc(sizeof(char) * count + 1);

    sprintf(num1, "%d", a);
    sprintf(num2, "%d", b);
    
    char* sum = (char*)malloc(strlen(num1)+strlen(num2)+1);
    
    strcpy(sum, num1);
    strcat(sum, num2);
    
    int sum2num = atoi(sum);
    int num3 = 2*a*b;
    sum2num > num3 ? (answer = sum2num) : (answer = num3);
    
    return answer;
}