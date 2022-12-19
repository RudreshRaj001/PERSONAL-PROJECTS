// GAME : GUESS THE NUMBER (between 1 and 100)
// HOW TO PLAY :
// 1. program generates a random number which you dont know
// 2. you have to guess which number is it 
// 3. everytime you guess the number program will tell that the required number is higher or lower than your guess
// 4. at last it will tell you after how many attempts you guessed the number correctly

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     int number, guess, nguesses = 1;
     srand(time(0));
     number = rand() % 100 + 1; // generates random number between 1 to 100
    // printf("The number is %d\n", number);
     // keep running the loop until the no. is guessed
     do
     {
          printf("Guess the number between 1 to 100 \n");
          scanf("%d", &guess);
          if (guess > number)
          {
               printf("Lower number please\n");
          }
          else if (guess < number)
          {
               printf("Upper number please\n");
          }
          else
          {
               printf("you guessed it in %d attempts\n", nguesses);
          }
          nguesses++;

     } while (guess != number);

     return 0;
}