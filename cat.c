#include <stdio.h>

char *get_text(char *file_path)
{
    FILE *file = fopen(file_path, "r");

    long int res = ftell(file);
    char *str = (char *)malloc(sizeof(char) * res);
    int i = 0;
    while (!feof(file))
    {
        str[i] = getc(file);
        i++;
    }

    fclose(file);
    return str;
}

int main(int args_count, char *args[])
{
    if (args_count > 2)
    {
        char* text = get_text(args[1]);
        printf(text);
    }
}