/*This is a program to play for While Loops.
To compile run gcc -o <name of file to compile> <name of file to be compiled>  */

#include <stdlib.h> // Standard library
#include <stdio.h> // For standard Input/Output
#include <unistd.h> // For the sleep function
#include <time.h> // For time functions


int main() {

  // Set seed for time
  srand(time(0));

  // Create variable for eruptions
  int eruptions = 0;

  // Get user input for the number of eruptions to simulate
  printf("How many eruptions you wan simulate mon? \n");
  scanf("%d", &eruptions); // scan an integer and put it into eruptions

  // Create a counter for Integration
  int i = 0;

  // Create While Loop for the Program
  while (i < eruptions) {

    int sleepTime = (rand() % 5) + 1;
    printf("Eruption %d happening in %d seconds...brace yuhself! \n", i+1, sleepTime);
    sleep(sleepTime);
    i++;
  }

  printf("The volcano spirits have rested bredren. \n");

  return 0;

}
