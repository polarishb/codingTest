#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int arr[4] = { a, b, c, d };
    int count[6] = { 0, 0, 0, 0, 0, 0};
    
    for (int i = 0; i < 4; i++) {
        count[arr[i]-1]++;
    }

    for (int i = 0; i < 6; i++) {
        switch(count[i]){
            case 4:
                return 1111 * (i + 1);
            case 3:
                for (int j = 0; j < 6; j++) {
                    if (count[j] == 1) return (int)pow(10 * (i + 1) + (j + 1), 2);
                }
            case 2:
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