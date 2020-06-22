#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    char *piece = strtok(s, " ");

    while (piece != NULL)
    {

        printf("%s\n", piece);
        piece = strtok(NULL, " ");
    }

    return 0;
}