#include <stdio.h>
int main()
{

    printf("This is a small game of guessing random numbers\n");
    printf("****************HERE**WE**GO***************\n");
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 +1;
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed the number in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);

    return 0;

}