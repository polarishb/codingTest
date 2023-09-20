#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

enum direction {
    up = 3,
    down = 1,
    left = 2,
    right = 0
};

int** solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int** answer = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        answer[i] = (int*)malloc(sizeof(int) * n);
        memset(answer[i], 0, sizeof(int) * n);
    }

    int idx = 0;
    int num = 0;
    int x = 0;
    int y = -1;
    int wallX[2] = { 0, n - 1 };
    int wallY[2] = { 0, n - 1 };

    while (num++ < n * n) {
        switch (idx % 4) {
            case right:
                answer[x][++y] = num;
                if (y == wallY[1]) {
                    idx++;
                    wallX[0]++;
                }
                break;
            case down:
                answer[++x][y] = num;
                if (x == wallX[1]) {
                    idx++;
                    wallY[1]--;
                }
                break;
            case left:
                answer[x][--y] = num;
                if (y == wallY[0]) {
                    idx++;
                    wallX[1]--;
                }
                break;
            case up:
                answer[--x][y] = num;
                if (x == wallX[0]) {
                    idx++;
                    wallY[0]++;
                }
                break;
        }
    }
    
    return answer;
}