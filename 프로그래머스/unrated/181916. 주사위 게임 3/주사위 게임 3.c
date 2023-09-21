#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int arr[4] = { a, b, c, d };
    int count[6] = { 0, 0, 0, 0, 0, 0};
    
    for (int i = 0; i < 4; i++) {
        switch (arr[i]) {
        case 1:
            count[0]++;
            break;
        case 2:
            count[1]++;
            break;
        case 3:
            count[2]++;
            break;
        case 4:
            count[3]++;
            break;
        case 5:
            count[4]++;
            break;
        case 6:
            count[5]++;
            break;
        }
    }

    for (int i = 0; i < 6; i++) {
        if (count[i] == 4) {
            return 1111 * (i + 1);
        }
        else if (count[i] == 3) {
            for (int j = 0; j < 6; j++) {
                if (count[j] == 1) return (int)pow(10 * (i + 1) + (j + 1), 2);
            }
        }
        else if (count[i] == 2) {
            for (int j = 0; j < 6; j++) {
                if (count[j] == 2 && j != i) return ((i + 1) + (j + 1)) * abs((i + 1) - (j + 1));
                else if (count[j] == 1) {
                    for (int k = 0; k < 6; k++) {
                        if (count[k] == 1 && k != j) return (j + 1) * (k + 1);
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < 6; i++) {
        if(count[i] == 1 ) return i + 1;
    }
    
    return answer;
}