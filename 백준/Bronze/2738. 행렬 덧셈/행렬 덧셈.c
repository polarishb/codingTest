#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 0;
    int M = 0;

    scanf("%d %d", &N, &M);

    int** arrA = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++) {
        arrA[i] = (int*)malloc(sizeof(int) * M);
        for (int j = 0; j < M; j++) {
            scanf("%d", &arrA[i][j]);
        }
    }
    int** arrB = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++) {
        arrB[i] = (int*)malloc(sizeof(int) * M);
        for (int j = 0; j < M; j++) {
            scanf("%d", &arrB[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arrA[i][j] + arrB[i][j]);
        }
        printf("\n");
    }


    return 0;
}