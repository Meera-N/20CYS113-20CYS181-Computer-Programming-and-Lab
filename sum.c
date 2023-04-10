#include<stdio.h>

int main () {

//declaring variables

int sum, num ;

//getting input

printf("Please enter N of which sum should be found: \n");

scanf("%d",&num);

//calculation 

sum = num * ((num + 1))/ 2 ;

//outputting

printf("The sum of first %d numbers is %d \n",num, sum);

}

