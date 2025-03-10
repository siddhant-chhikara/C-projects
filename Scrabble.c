#include <stdio.h>

int letter_scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
int score(char a)
    {
        if (a >= 'A' && a <= 'Z')
        {
            a = a - 'A' + 'a' ;
        }
        if (a >= 'a' && a <= 'z')
        {
            return letter_scores[a - 'a'] ;
        }
        return 0;
    }

int main (void)
{
    

    char word1[20] , word2[20] ;
    printf("Player 1 : ");
    scanf("%s", word1 );
    printf("Player 2 : ");
    scanf("%s", word2 );

    int sc1 = 0 , sc2 = 0;
    for (int i = 0; word1[i] != '\0'; i++)
    {
        sc1 += score(word1[i]);
    }
    for ( int i = 0 ; word2[i] != '\0' ; i++)
    {
        sc2 += score(word2[i]);
    }

    // printf("P1 =%d\n",sc1);
    // printf("P2 =%d",sc2);

    if (sc1 > sc2)
    printf("Player 1 wins !");
    else if (sc2 > sc1)
    printf("Player 2 wins !");
    else if (sc1 == sc2)
    printf("Tie ");
}