/* This program asks a user to choose a number for a spicy dish.
To compile, run gcc -o control_flow control_flow.c */

#include <stdio.h>

int main() {

  // Prompt user to play the game and define their choice.
  int choice;
  printf("Bless up! In dis game yuh gon seleck a number and I will return a spicy"
        "flavour for yuh! \n"
        "Now, please preach a number between 1 and 3, nuff said:  \n");
  scanf("%d", &choice);

  // Define the spice level based on user input.
  int spiceLevel;
  switch (choice) {
  case 1:
      spiceLevel = 1;
      break;
  case 2:
      spiceLevel = 2;
      break;
  case 3:
      spiceLevel = 3;
      break;
  default:
      printf("That choice nah de pon the list bredren. \n");
      return 1;
  }



}
