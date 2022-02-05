#include <stdio.h>
#include <stdlib.h>


    /* In this program, the user will have three chances to guess a number to win the game. */
    /* ------------------------------------------------------------------------------------ */
int main(){

    /* Define variables. */
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    /* This while loop will count the guesses (out of guesses is 1) and check to see if we got the right number. */
    /* You can keep guessing until you are out of guesses. You have three chances. */
    while(guess != secretNumber && outOfGuesses	== 0) {
    	if (guessCount < guessLimit){
	    	
        	printf("Enter a number: ");
        	scanf("%d", &guess);
        	guessCount++;
    	} else{
	    	
	    	outOfGuesses = 1;
	    }
    }
    
    /* If you run out of guesses, it sets to "true" as a boolean so you lose. Otherwise, if you don't, you win. */
    if(outOfGuesses == 1) {
   		printf("Out of guesses.");
    } else {
    printf("You win!");
    }

    return 0;
}