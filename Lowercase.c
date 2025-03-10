#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[10];
    int flag=0;
    printf("What is your name?\n");
    scanf("%s", name);
    //printf("Hello, %s\n", name);
    for (int i = 0; i < strlen(name) ; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            flag = 1;
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}