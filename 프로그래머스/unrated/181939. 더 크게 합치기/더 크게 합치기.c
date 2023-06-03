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
    
    char* sum1 = (char*)malloc(strlen(num1)+strlen(num2)+1);
    char* sum2 = (char*)malloc(strlen(num1)+strlen(num2)+1);
    
    strcpy(sum1, num1);
    strcat(sum1, num2);
    
    strcpy(sum2, num2);
    strcat(sum2, num1);
    
    int sum1_num = atoi(sum1);
    int sum2_num = atoi(sum2);
    
    sum1_num > sum2_num ? (answer = sum1_num) : (answer = sum2_num);
    
    return answer;
}