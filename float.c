/* float.c */
#include <stdio.h>

int main(){

float pi, r, answer;
/*Nb: r = radius */

printf("What is R in cm? \n");
scanf("%f",&r);

pi = 3.14;

answer = r * r * pi;

printf("The area is %f\n", answer);

return 0;
/*
 %s - string (text)
 %d - integer (int)
 %f - float number (number with a decimal)
*/
}
