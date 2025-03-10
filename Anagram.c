#include <stdio.h>
#include <string.h>

int main(int argc , char *argv[])
{
    char *s = argv[1];
    char *t = argv[2];
    int sL = strlen(argv[1]);
    int tL = strlen(argv[2]);
    int x=0;

    for (int i=0 ; i < sL ; i++)
    {
        for (int j=0 ; j < tL ; j++)
        {
            if (s[i]==t[j])
            {
                t[j]='\0';
                x++;
                break;
            }
            
        }
    }

    if ( x == sL)
    printf("This is an anagram\n");
    else
    printf("This is not an anagram\n");
}