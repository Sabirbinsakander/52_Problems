#include<stdio.h>
int main()
{
    char first_line[10001];
    char second_line[2];

    scanf(" %[^\n]", first_line);
    scanf(" %[^\n]", second_line);

    count = 0;
    for ( i = 0; i < strlen(first_line); i++)
    {
        /* code */
        if(second_line[0] == first_line[i])
        {
            count++;
        }
    }
    printf("Occurrence of '%c' in '%s' = %d\n", second_line[0], first_line, count);
    printf(" '%c' is not present\n", second_line[0]);
    
}