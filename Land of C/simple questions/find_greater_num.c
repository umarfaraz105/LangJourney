/*
Write a program to find greatest of four numbers entered by the user.
*/


// solution 


#include <stdio.h>

int main (){

    int num1, num2, num3, num4;
    printf("Enter four integers: \n");
    scanf("%d %d %d %d ", &num1, &num2, &num3, &num4);

    if (num1> num3 && num1>num2 && num1>4){
        printf("this %d is greatest among all numbers",num1);
    }
    else if (num2> num3 && num2>num1 && num2>num4){
        printf("this %d is greatest among all numbers",num2);
    }
    else if (num3> num1 && num3>num2 && num3>num4){
        printf("this %d is greatest among all numbers",num3);
    }
    else{
        printf("this %d is greatest among all numbers",num4);
    }
    return 0;
}