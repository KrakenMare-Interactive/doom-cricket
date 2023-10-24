/* This program asks a user to choose a number for a spicy dish.
To compile, run gcc -o control_flow control_flow.c */

#include <stdio.h>

int main() {

  // Prompt user to play the game and define the `choice`.
  int choice;
  printf("Bless up! In dis game yuh gon seleck a number and I will return a spicy"
        "flavour for yuh! \n"
        "Now, please preach a number between 1 and 3, nuff said:  \n");
  scanf("%d", &choice);

  // Define the `spiceLevel` based on user input.
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

  // Suggest a spicy dish based on the `spiceLevel`
if (spiceLevel == 1) {
    printf("Mi recommend di Mild Jerk Chicken. \n");
} else if (spiceLevel == 2) {
    printf("Try di Spicy Cassowary Gumbo mon!. \n");
} else if (spiceLevel == 3) {
    printf("If yuh brave, try di Warlock Inferno Sauce! \n");
}


}
