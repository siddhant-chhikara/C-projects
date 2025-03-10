#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     printf("Enter the length of the array: ");
     int length;
     scanf("%d", &length);

     int *num = malloc(sizeof(int) * length);

     printf("Enter an array of nums : ");
     for (int i = 0; i < length; i++)
     {
          scanf("%d", &num[i]);
     }

     printf("Enter the target sum : ");
     int t;
     scanf("%d", &t);
     printf("Target = %d \n", t);
     int a, b;
     for (int a = 0; a < length - 1; a++)
     {
          for (int b = a + 1; b < length; b++)
          {
               if (num[a] + num[b] == t)
                    printf("%d , %d \n", num[a], num[b]);
          }
     }

     free(num);

     return 0;
}