#include<stdio.h>
#include<string.h>

int main()
{
    char s[7][20], t[20];
    int i, j;

    for (i = 0; i < 7; i++)
    {
        printf("\nEnter the name: ");
        scanf("%s", s[i]);
    }

    for (i = 1; i < 7; i++)
    {
        for (j = 1; j < 7; j++)
        {
            if (strcmp(s[j - 1], s[j]) > 0)
            {
                strcpy(t, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], t);
            }
        }
    }
    printf("\nThe following names in alphabetical: ");
    for (i = 0; i < 7; i++)
    {
        printf("\n%s", s[i]);
    }
    return(0);
}
