#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int guess , random ; 
   int no_of_guesses = 0 ;
   srand(time(NULL));

   printf("welcome to the world of guessing number\n");
   random = rand() % 100  + 1 ;
    do{
      printf("enter ur guess number : \n");
      scanf("%d" ,&guess);
      no_of_guesses ++ ;
      if(guess > random){
         printf("guess smaller number \n");
      }
      else if(guess < random){
         printf("guess larger number \n");
      }
      else{
         printf("congrats!!! u guesses the right number in %d attempts" , no_of_guesses  );

      }
    }while(guess != random);
printf("thanks for playing \n");
printf("bye bye thanks sir/mam \n");
return 0 ; 
}




















