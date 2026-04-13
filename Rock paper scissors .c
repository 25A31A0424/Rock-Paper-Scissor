#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;

    // Seed random number generator
    srand(time(0));

    printf("Rock Paper Scissors Game\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    // Generate computer choice (1-3)
    computer = rand() % 3 + 1;

    printf("Computer chose: %d\n", computer);

    // Display choices
    if(user == 1) printf("You chose Rock\n");
    else if(user == 2) printf("You chose Paper\n");
    else if(user == 3) printf("You chose Scissors\n");
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    if(computer == 1) printf("Computer chose Rock\n");
    else if(computer == 2) printf("Computer chose Paper\n");
    else printf("Computer chose Scissors\n");

    // Game logic
    if(user == computer) {
        printf("It's a Draw!\n");
    }
    else if((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)) {
        printf("You Win!\n");
    }
    else {
        printf("Computer Wins!\n");
    }

    return 0;
}
