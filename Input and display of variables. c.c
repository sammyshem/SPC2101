/*
Name; Shem sammy
Reg no:PA106/G/28607/26
Description:A program to prompt entry and display of height, phone number and bank balance 
*/

#include <stdio.h>
int main(){

int height;
float bankBalance;
char phoneNumber [20];

printf("Input height (in meters): \n");
scanf ("%d",&height);

printf("Input bank balance (in kshs):\n");
scanf("%F",&bankBalance);

printf("Input phone number: \n");
scanf("%s", &phoneNumber);

printf("Height %d\n", height);

printf("Your bank balance is: %.3f\n", bankBalance);
printf("Your phone number:%s\n", phoneNumber);

return 0;
}
    