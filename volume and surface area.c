/*
Name: Shem Sammy
Reg No: PA106/G/28607/25
Description: A program to find the surface area and volume of a cylinder 
*/
#include <stdio.h>

int main(){
    //prompt to enter radius
    printf("Input radius;");
    float r;
    scanf("%f",&r);
    //prompt to enter height
    printf("Input height;");
    float h;
    scanf("%f",&h);
    //execution
    float volume=3.14159*r*r*h;
    
    printf("The volume of the cylinder if %.2f\n",volume);
    
    double area=(2*3.14159*r*r)+(2*3.145159*r*h);
    printf("The surface area of the cylinder is %.2lf",area);
    
    return 0;
}
