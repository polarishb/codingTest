#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    int x = 0;
    int y = 0;
    
    for(int i = 1; i < dots_rows; i++){
        if(dots[0][0] == dots[i][0]){
            y = abs(dots[0][1] - dots[i][1]);
        }
        if(dots[0][1] == dots[i][1]){
            x = abs(dots[0][0] - dots[i][0]);
        }
    }
    
    answer = x * y;
    return answer;
}