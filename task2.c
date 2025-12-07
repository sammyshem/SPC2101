#include <stdio.h>

int main(){
    int age;
    float income;
    
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