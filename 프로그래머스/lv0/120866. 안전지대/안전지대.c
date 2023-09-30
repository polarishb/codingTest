#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// board_rows는 2차원 배열 board의 행 길이, board_cols는 2차원 배열 board의 열 길이입니다.
int solution(int** board, size_t board_rows, size_t board_cols) {
    int answer = 0;
    bool check = false;
    for(int i = 0; i < board_rows; i++){
        for(int j = 0; j < board_cols; j++){
            check = true;
            for(int y = i - 1; y <= i + 1; y++){
                if(y >= 0 && y < board_rows){
                    for(int x = j - 1; x <= j + 1; x++){
                        if(x >= 0 && x < board_cols){
                            if(board[x][y] == 1){
                                check = false;
                                break;
                            }
                        }
                    }
                }
                if(!check) break;
            }
            if(check) answer++;
        }
    }
    return answer;
}