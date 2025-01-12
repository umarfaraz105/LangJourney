//Write a program to sum first ten natural numbers using while loop

//solution

#include <stdio.h>


int main(){

         int sum  =  0;
         for( int i = 0 ; i<=10 ; i++){
            sum +=i;
         }

         printf("sum of the 10 numbers  is %d",sum);

    return 0;
}