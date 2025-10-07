#include <stdio.h>

int main() {
  int ichoice, ochoice;
  double value, result;
  char repeat;

  do {
  printf("Select the unit you will prefer to convert:\n");
  printf("1. Hours\n");
  printf("2. Minutes\n");
  printf("3. Seconds\n");
  printf("Enter your choice (1-3): ");
  scanf("%d", &ichoice);
  
     if (ichoice == 1) {
      printf("You have chosen Hours\n");
    } else if (ichoice == 2) {
      printf("You have chosen Minutes\n");
    } else if (ichoice == 3) {
      printf("You have chosen Seconds\n");
    }
  printf("Enter that value which you want to convert: ");
  scanf("%lf", &value);

  printf("Select unit in which it will be converted:\n");
  printf("1. Hours\n");
  printf("2. Minutes\n");
  printf("3. Seconds\n");
 
     if (ochoice == 1) {
      printf("You have chosen Hours\n");
    } else if (ochoice == 2) {
      printf("You have chosen Minutes\n");
    } else if (ochoice == 3) {
      printf("You have chosen Seconds\n");
    }
    printf("Enter your choice (1-3): ");
    scanf("%d", &ochoice);
    if (ichoice == ochoice) {
      result = value;
    } else if (ichoice == 1 && ochoice == 2) {
      result = value * 60.0;
    } else if (ichoice == 1 && ochoice == 3) {
      result = value * 3600.0;
    } else if (ichoice == 2 && ochoice == 1) {
      result = value / 60.0;
    } else if (ichoice == 2 && ochoice == 3) {
      result = value * 60.0;
    } else if (ichoice == 3 && ochoice == 1) {
      result = value / 3600.0;
    } else if (ichoice == 3 && ochoice == 2) {
      result = value / 60.0;
    }
     printf("We have converted value as %.2lf\n", result);
     printf("Do you want to convert again ? (y/n) ");
     printf("Do you want to convert again ? (y/n) ");
     if(scanf(" %c", &repeat) != 1) {
     fprintf(stderr, "Failed to read the answer\n");
     return 1;
}
    
  } while (repeat == 'y' || repeat == 'Y');

  return 0;
}
