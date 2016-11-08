#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int r = rand() % 100 + 1;
    int correct = 0; 
    int guess; 
    int counter = 0; 
    printf("Guess the random number between 1 - 100   "); 
    printf("%d", r); 


    do {
        //scan the users input every entry 
        scanf("%d", &guess);
        //if user guesses correctly
        if (guess == r) {
            counter++;
            printf("You guess correctly in %d tries!! Tight! \n", counter);
            correct = 1; 
        }
        //if the guess is too low
        if (guess < r) {
            counter++;
            printf("Your guess is too low. Guess higher!! ");
        }
        //if your guess is too high
        if (guess > r) { 
            counter++; 
            printf("Your guess is too high. Guess lower!! ");
        }
    //do this while you are incorrect     
    } while (correct == 0);

    return 0;
}
