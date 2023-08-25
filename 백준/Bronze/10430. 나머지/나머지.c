#include <stdio.h>

int main(){
   
   int a = 0, b = 0, c = 0;
   scanf("%d%d%d", &a, &b, &c);
   printf("%d\n%d\n%d\n%d", (a+b)%c,((a%c)+(b%c))%c, (a*b)%c, ((a%c)*(b%c))%c);

   return 0;
}