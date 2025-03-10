#include <stdio.h>

int main(void)
{
     int max = 9;
     int sud[max][max];

     // Read the Sudoku puzzle
     for (int i = 0; i < max; i++) {
          for (int j = 0; j < max; j++) {
               scanf("%d", &sud[i][j]);
          }
     }

     // Print the Sudoku puzzle
     // for (int i = 0; i < max; i++) {
     //      for (int j = 0; j < max; j++) {
     //           printf("%d ", sud[i][j]);
     //      }
     //      printf("\n");
     // }
     
     // Check columns
     for (int a = 0; a < max; a++) {
          int sumc = 0;
          for (int b = 0; b < max; b++) {
               sumc += sud[b][a];
          }
          if (sumc != 45) {
               return 1;
          }
     }

     // Check rows
     for (int a = 0; a < max; a++) {
          int suml = 0;
          for (int b = 0; b < max; b++) {
               suml += sud[a][b];
          }
          if (suml != 45) {
               return 1;
          }
     }

     // Check boxes
     for (int boxRow = 0; boxRow < max; boxRow += 3) {
          for (int boxCol = 0; boxCol < max; boxCol += 3) {
               int sumb = 0;
               for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                         sumb += sud[boxRow + i][boxCol + j];
                    }
               }
               if (sumb != 45) 
               {
                    printf("huhhhhhhhhhhhhhhhhhhhhhh");
                    return 1;
               }
          }
     }

     // If we get here, the Sudoku puzzle is valid
     printf("yippie yippie");
     return 0;
}