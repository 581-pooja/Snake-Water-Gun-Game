#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char user,char comp){
    // return 0 for draw and 1 for win and -1 for lose

    // for draw return 0
    if(user == comp){
        return 0;
    }

    if(user == 's' && comp == 'w')
    {
        return 1;
    }else if (user == 'w' && comp == 's')
    {
        return -1;
    }

    if(user == 's' && comp == 'g')
    {
        return -1;
    }else if (user == 'g' && comp == 's')
    {
        return 1;
    }

    if(user == 'g' && comp == 'w')
    {
        return -1;
    }else if (user == 'w' && comp == 'g')
    {
        return 1;
    }

}

int main(){
    int result;
    char user, comp;

    // Generating randow choice:
    srand(time(0));
    int number = rand()%100 + 1;
    if(number < 33){
        comp = 's';
    }
    else if(number < 66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }

    //Taking user choice
    printf("Enter your choice snake for 's' , gun for 'g' , water for 'w' and 'q' for Quit: \n");
    scanf("%c",&user);

    if(user == 'q'){
        printf("Thanks for Playing!!\n");
    }

    result = snakeWaterGun(user , comp);

    //Declaring the result
    if (result == 0){
        printf("There is a draw! Better luck next time. \n");
    }
    else if(result == 1 ){
        printf("You Win! \n");
    }
    else if(result == -1 ){
        printf("You Lose! \n");
    }
    else{
        printf("Invalid choice!!");
    }
    printf("Your choice %c and Computer choice %c. \n",user,comp);

    return 0;
}