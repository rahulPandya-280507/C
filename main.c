//this is my first C program!!!
#include <stdio.h>
int main(){
    float x,y,z;
    
    printf("Enter the values: ");
    scanf("%f %f", &x, &y);
    z=(x+y)/y;
    printf("%f", z);
    return 0;
}