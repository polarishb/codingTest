#include <stdio.h>

int main() {
    int student[30] = { 0 };
    int num = 0;
    int count = 28;

    while (count--) {
        scanf("%d", &num);
        getchar();

        student[num-1]++;
    }

    for (int i = 0; i < 30; i++) {
        if(student[i] == 0) printf("%d\n", i +1);
    }

    return 0;
}