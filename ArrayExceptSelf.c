#include <stdio.h>

void self()
{
     printf( "Enter an array :");
     int ar[5];
     for (int i=0 ; i < 5 ; i++)
     {
          scanf("%d",&ar[i]);
     }
     printf("Enter the number to be excluded :");
     int n;
     scanf("%d",&n);
     for (int j=0 ; j<5 ; j++)
     {
          if (ar[j]==n)
          ar[j]=1;
     }
     int prod=1;
     for (int i=0 ; i < 5 ; i++)
     {
          prod=prod*ar[i];
     }
     printf("Answer = %d",prod);
}
int main(void)
{
     self();
}
