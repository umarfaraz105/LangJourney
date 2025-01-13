/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

//solution


#include <stdio.h>

int main (){

    char charc ;

    printf("enter any character \n");
    scanf("%c",&charc);


 if(charc >=97 && charc <= 122){
    
    printf("this character is a lower case letter \n");
}
else{
    printf("this character is not a lower case letter \n");
}
return 0;
}