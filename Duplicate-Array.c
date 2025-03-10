#include <stdio.h>
#include <string.h>
int main (int argc , char *argv[])
{
    // printf("Enter a string: ");SQL query to list the names of all songs in increasing order of tempo
    // scanf("%s", argv[1]);
    int s = strlen(argv[1]);
    for ( int i = 0 ; i < s ; i++)
    {
        for ( int j = i+1 ; j < s ; j++ )
        {
            if ( argv[1][i] == argv[1][j])
            {
                printf("Duplicate item is present\n");
                return 1;
            }
            
        }
    }
    printf("No duplicate item is present");
    return 0;
}