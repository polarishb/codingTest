#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b, int c) {
    int answer = 0;
    
    if(a != b && a != c && b != c)
        answer = a + b + c;
    else if (a == b && b == c)
        answer = (a + b + c)
                 * (int)(pow(a, 2) + pow(b, 2) + pow(c, 2))
                 * (int)(pow(a, 3) + pow(b, 3) + pow(c, 3));
    else
        answer = (a + b + c)
                 * (int)(pow(a, 2) + pow(b, 2) + pow(c, 2));
    
    return answer;
}