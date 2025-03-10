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
    strcpy(person[0].number, "1234567890");
    strcpy(person[1].name, "papa");
    strcpy(person[1].number, "0987654321");
    strcpy(person[2].name, "mom");
    strcpy(person[2].number, "9876543210");
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
