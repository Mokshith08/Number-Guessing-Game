#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    int number, guess;
    srand(time(NULL));
    printf("Welcome to the Guessing Game!\n");
    number = rand() % 10;  
    printf("\nGuess a number between 1 and 10: ");
    int attempt = 0;
    while (guess != number){
        scanf("%d", &guess);
        attempt++;
        if (guess < number){
            printf("Too low! Try again with higher number: ");
        } 
        else if(guess > number){
            printf("Too high! Try again with lower number: ");
            }
    else
        printf("Congratulations!!\n You guessed the number (%d) in %d attempts...\n", number,attempt);
    }
    printf("<----Thanks for playing---->\n");
    return 0;                 
}