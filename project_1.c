#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

   
    int random_number = (rand() % 100) + 1;
   
    int guessed_number;
    int number_of_guesses=0;
  
    
    
    do
    {
        printf("guess a number\n");
        scanf("%d",&guessed_number);
        if (guessed_number>random_number)
        {
          printf("Lower number please!\n");
        }
        else if  (guessed_number<random_number){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats\n");
        }
        number_of_guesses++;
    } while (guessed_number!=random_number);
    printf("You guess the correct number\n");
    printf("Total number of guesses:%d",number_of_guesses);
    return 0;
}

   

