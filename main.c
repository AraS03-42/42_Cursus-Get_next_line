#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main ()
{
    int fd ;
    int fd2;
    fd = open ("get_next_line.h", O_RDONLY);
    fd2 = open ("get_next_line_bonus.h", O_RDONLY);
    char *str;
    char a;
    int i;
    a = 'b';

    while(i<5)
    {   str = &a;
        while(str)
        {
        str = get_next_line(fd);
        printf("%s", str);
        free(str);
        }
    printf("\n");
    fd++;
    i++;
    }
    system("leaks a.out");
}