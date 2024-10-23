//Mariana Guerrero
//Dr. Steinberg
//COP3223C 
//Large Program 1 

#define ROUNDS 3
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void greeting(); 
int playRound(int round); 
int humanPick(); 
int computerPick(int choice, int leftover); 
int leftOnTable(int toothpicks, int taken); 
void winnerAnnouncment(int user); 

int main() {
    greeting(); 

    for (int x = 0; x < ROUNDS; ++x) 
    {
        int result = playRound(x + 1); 
        winnerAnnouncment(result); 
    }

    printf("*******************************************************\n");
    printf("Thank you for playing!\n");
    return 0;
}

void greeting() {
    printf("********************************************************\n");
    printf("Welcome to the Toothpick Game!\n");
    printf("Here are the rules.\n");
    printf("There are currently 31 toothpicks on the table.\n");
    printf("You and I will each get a turn to pick either 1, 2, or 3 toothpicks off the table.\n");
    printf("The player that gets to pick the last toothpick loses the game!\n");
    printf("Sounds easy right? Well lets see if you can beat me!\n");
    printf("Ready to play?...Here we go!\n");
    printf("********************************************************\n");
}

int playRound(int round) {
    printf("Welcome to a new round %d!\n", round);
    printf("You may go first!\n");
    printf("********************************************************\n");

    int toothpicks = 31; 
    int count = -1; //count variable to keep counting turns.

    while (toothpicks != 0) {
        printf("********************************************************\n");
        printf("There are %d toothpick(s) left on the table\n", toothpicks);
       int humanPick() {
            int pick;
            printf("How many toothpicks are you going to take off the table? ");
            scanf("%d", &pick);
            if (pick==1||pick==2||pick==3||pick<toothpicks)
                printf("Ok... you took %d off the table.\n",pick);
                return pick;
        } 
        int userPick = humanPick();
        while (userPick < 1 || userPick > 3 || userPick > toothpicks) {
            printf("Oh no no, you can't do that in this game! Try again.\n");
            userPick = humanPick();
        }

        toothpicks = leftOnTable(toothpicks, userPick);
        count = 0; 

        if (toothpicks == 0) 
        	return count;

        int computerPick(int choice, int leftover) {
            int total;
            if (leftover > 4) {
                total = 4 - choice; 
            } 
            else if (leftover <= 4 && leftover >= 2) {
                total = leftover - 1;
            } 
            else {
                total = 1; 
            }
            
            printf("I'm making my decision now.\n");
            printf("I am taking %d toothpick(s) off the table.\n", total);
            return total;
}
        int compPick = computerPick(userPick, toothpicks);
        toothpicks = leftOnTable(toothpicks, compPick);
        count = 1; 
    	
    	if (toothpicks == 0) 
        	return count;
    }
		
    return count; // Return who picked last
}


int leftOnTable(int toothpicks, int taken) {
    toothpicks= toothpicks - taken; 
    return toothpicks; //updated number of toothpicks
}

void winnerAnnouncment(int user) {
    if (user == 0) {
        printf("You won! I'll let you have this one.\n");
        printf("********************************************************\n");

    } else {
        printf("I won! Haha better luck next time!\n");
        printf("********************************************************\n");

    }
}
