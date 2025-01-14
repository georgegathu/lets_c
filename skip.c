#include <stdio.h>

int main(){
 goto skip;
 printf("You cannot see me\n");
skip:
 printf("Hi there\n");
 return 0;

}