#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    double slope[6] = {0};
    int idx = 0;
    
    for(int i = 0; i < dots_rows - 1; i++){
        for(int j = i + 1; j < dots_rows; j++){
            slope[idx++] = (double)(dots[i][1] - dots[j][1]) / (double)(dots[i][0] - dots[j][0]);
        }
    }
    
    for(int i = 0; i < idx / 2; i++){
        if(slope[i] == slope[idx - 1 - i]) return 1;
    }
    
    return answer;
}