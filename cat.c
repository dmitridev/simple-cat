#include <stdio.h>
#include <stdlib.h>

int main(int args_count, char ** args)
{   
    if(args_count > 1){

        FILE *file = fopen(args[1], "r");

        while (!feof(file))
        {
            putc(getc(file),stdout);

        }
        fclose(file);
    }
    return 0;
}
