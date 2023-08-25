#include <stdio.h>

int main(){
    int h=0,m=0;   
    int time=0;
    scanf("%d %d", &h, &m);

    time = h * 60 + m - 45;

    if (time < 0){
        time = 24 * 60 + time;
    }
    h = time / 60;
    m = time % 60;

    printf("%d %d", h, m);

    

}