#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    int answer = 0;
    
    int n_chk = number % n;
    int m_chk = number % m;
    
    answer = ( n_chk == 0 ) && ( m_chk == 0) ? 1 : 0;
    return answer;
}