#include <stdio.h>
int main ()
{
    char str[50];
    int count = 0, i;
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", &str);
    for (i = 0;str[i] != '\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}
