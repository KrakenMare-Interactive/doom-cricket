/*This is a program to play for Do-While Loops.
To compile run gcc -o <name of file to compile> <name of file to be compiled>  */

#include <stdlib.h> // Standard library
#include <stdio.h> // For standard Input/Output
#include <unistd.h> // For the sleep function
#include <time.h> // For time functions


int main() {
  srand(time(0));

  // Create variable for eruptions
  int eruptions = 0;

  // Get user input for the number of eruptions to simulate
  printf("How many eruptions you wan simulate mon? \n");
  scanf("%d", &eruptions); // scan an integer and put it into eruptions

  // Set a counter
  int i = 0;

  // Create a Do-While loop
  do {
      int sleepTime = (rand() % 5) + 1;
      printf("Eruption %d will shake di Earth in %d seconds. Get ready! \n", i+1, sleepTime);
      sleep(sleepTime);
      i++;
  } while (i < eruptions);

  printf("The eruptions have soothed and peace returned to tha island. \n");

  return 0 ;

}
