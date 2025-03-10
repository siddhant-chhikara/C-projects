#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[50];
    char number[50];
} people;

int main (void)
{
    people person[3];
    strcpy(person[0].name, "sid");
    strcpy(person[0].number, "8800670130");
    strcpy(person[1].name, "arjun");
    strcpy(person[1].number, "9911146502");
    strcpy(person[2].name, "mom");
    strcpy(person[2].number, "8920103269");
    char search[50];
    printf("Enter name : ");
    scanf("%s",search);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(person[i].name , search ) == 0)
        {
            printf("%s's number is %s\n", search, person[i].number );
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}