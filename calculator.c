#include<stdio.h>
int main() {

//declaring variables
 
int operand1, operand2;
double result;
int c ;

//introduction

printf("\nWelcome to simple calculator. \n\nTo perform addition, enter 1. \nTo perform subtraction, enter 2. \nTo perform division, enter 3. \nTo perform multiplication, enter 4.\nTo perform modulus function, enter 5.\n");

scanf("%d",&c);
 

//getting input

printf("Please enter your 1st operand (integers only): \n");
scanf("%d", &operand1 ) ;

printf("Please enter your 2nd operand (integers only): \n");
scanf("%d", &operand2 );

//operations

if (c == 1) {
    result = operand1 + operand2;   	
    printf("\n\n The sum is %lf",result);
} 
else if (c == 2) {
    result = operand1 - operand2;
    printf("\n\n The difference is %lf",result);
} 
else if (c == 3) {
    result = operand1 / operand2;
    printf("\n\n The divisor is %lf",result);
}
else if (c == 4) {
    result = operand1 * operand2;
    printf("\n\n The product is %lf",result);
}
else if (c == 5) {
    result = operand1 % operand2;
    printf("\n\n The modulus is %lf",result);
} 

//ending 

printf("\n\nThankyou for using simple calculator !!\n\n");

}

