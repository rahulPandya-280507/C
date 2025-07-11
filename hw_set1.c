/*
Q1] Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
Q2] Take a number(n) from user & output its cube(n*n*n).
*/

//Q1
/*#include <stdio.h>
int main(){
    int a,b,perimeter;
    printf("Enter sides a and b of the rectangle: ");
    scanf("%d %d", &a, &b);
    // printf("%d, %d", a, b);
    perimeter = 2*a + 2*b;
    printf("The perimeter of the rectangle with sides {%d} and {%d} is: %d units", a,b,perimeter);
    return 0;
}*/

//Q2
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The cube of {%d} is: %d", n, n*n*n);
}