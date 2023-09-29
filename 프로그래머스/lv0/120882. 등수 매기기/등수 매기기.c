#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(void* a, void* b){
    return *(int*)b > *(int*)a;
}

// score_rows는 2차원 배열 score의 행 길이, score_cols는 2차원 배열 score의 열 길이입니다.
int* solution(int** score, size_t score_rows, size_t score_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* sum = (int*)malloc(sizeof(int) * score_rows);
    memset(sum, 0, sizeof(int) * score_rows);
    int* answer = (int*)malloc(sizeof(int) * score_rows);
    memset(answer, 0, sizeof(int) * score_rows);
    
    for(int i = 0; i < score_rows; i++){
        sum[i] = (score[i][0] + score[i][1]);
    }
    
    qsort(sum, score_rows, sizeof(int), compare);
    for(int i = 0; i < score_rows; i++){
        for(int j = 0; j < score_rows; j++){
            if(score[i][0] + score[i][1] == sum[j]){
                answer[i] = j + 1;
                break;
            }
        }
    }
    
    return answer;
}