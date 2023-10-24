/*This is a program to play for for loops.
To compile run gcc -o guardian_of_the_for_volcano_isle guardian_of_the_for_volcano_isle.c  */

#include <stdlib.h> // Standard library
#include <stdio.h> // For standard Input/Output
#include <unistd.h> // For the sleep function
#include <time.h> // For time functions

int main() {

// Introduction
printf("Welcome to For Volcano Island! \n");

//Set a random seed for time
srand(time(0));

// Define eruptionCount
int eruptionCount;
printf("How many volcanic eruptions do you want to simulate? \n");
scanf("%d", &eruptionCount);
printf("OK, we will watch di volcano erupt %d times! \n", eruptionCount);

// Create For Loop to loop over each eruptions
for(int i = 0; i < eruptionCount; i++ ) {
  printf("Eruption count %d \n", i+1);

  // Create random sleeTime
  int sleepTime = (rand() % 5) + 1;
  sleep(sleepTime);

  printf("%d seconds since the last eruption! \n", sleepTime);

}

  return 0; // All good!
}
