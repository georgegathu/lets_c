/* numbers.c */
#include <stdio.h>

int main(){
 int x, y, answer;

 printf("Choose a number\n");
 scanf("%d", &x);
 printf("Choose another number\n");
 scanf("%d", &y);

 answer = x + y;

 printf("The answer is %d\n", answer);

 return 0;

}
