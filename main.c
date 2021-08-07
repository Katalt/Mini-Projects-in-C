#include <stdio.h>
#include <stdlib.h>

int main(){
    int secretnumber = 5;
    int guess;
    int guesscount = 0;
    int guessmax = 3;
    int outofguesses = 0;

    while(guess != secretnumber && outofguesses == 0 ){
        if(guesscount<guessmax){
            printf("Enter the number: ");
            scanf("%d",&guess);
            guesscount++;
        } else{
            outofguesses = 1;
        }
    }
if(outofguesses == 1){
        printf("Out of Guesses");
}else{
    printf("You won");
}

}
