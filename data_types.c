/* Define some data types */


#include <stdio.h>

int main() {

  int age = 30; // integer type
  char firstLetter = 'D'; // character type
  double pi = 3.14159265358979323846; // a double-precision floating point

  printf("Age: %d\n", age);
  printf("First letter: %c\n", firstLetter);
  printf("Value of pi: %lf\n", pi);

  /* Program to get user input */

  char dish[50]; // this is an array of characters, one is reserved
  printf("What's your favourite spicy food? \n");
  scanf("%s", dish); // user input must be less than 49 chararacters
  printf("Ah, the amazing spicy %s! A dish worthy of a jungle feast! \n", dish);

}
