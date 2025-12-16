/*
Name:Shem sammy
Reg no:PA106/G/28607/25
Description:A prompt to calculate whether a customer is eligible for loan
*/



#include <stdio.h>

int main(){
    int age;
    float income;
    
    //prompting user to enter details
    printf("Input your age;\n");
    scanf("%d",&age);
    printf("What is your income;\n");
    scanf("%f",&income);
    
    if (age >=21){
        if (income >=21000)
          printf("Congratulations you qualify for a loan");
    }
    else{
        printf("Unfortunately, we are unable to offer you a loan at this time");
    }
        return 0;
}