/*We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
*/


//solution

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int random_number = rand() %100 +1;
    int guess_number, attempts = 0;

    do{
        printf("guess the number between 0 to 100\n");
        scanf("%d",&guess_number);
        if (guess_number > random_number){
            printf("Lower number please\n");
        }
        else if (guess_number < random_number){
            printf("Higher number please\n");
        }
        else{
            printf("Congratulations! You guessed the number in %d attempts\n",attempts+1);
            break;
        }

        attempts++;
    }

    while(random_number != guess_number);
    return 0;
}