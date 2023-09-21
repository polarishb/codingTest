#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_rows는 2차원 배열 arr의 행 길이, arr_cols는 2차원 배열 arr의 열 길이입니다.
int** solution(int** arr, size_t arr_rows, size_t arr_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int big = arr_rows > arr_cols ? arr_rows : arr_cols;
    
    int** answer = (int**)malloc(sizeof(int*) * big);
    for(int i = 0; i < big; i++){
        answer[i] = (int*)malloc(sizeof(int) * big);
        memset(answer[i], 0, sizeof(int) * big);
        if(i < arr_rows) memcpy(answer[i], arr[i], sizeof(int) * arr_cols);
    }
    return answer;
}