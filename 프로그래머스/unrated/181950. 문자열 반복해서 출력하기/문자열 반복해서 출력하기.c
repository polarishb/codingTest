#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    
    for(int i = a; i > 0; i--) printf("%s", s1);
    
    return 0;
}