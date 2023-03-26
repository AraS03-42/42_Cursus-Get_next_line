#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
    int fd;
    fd = open("get_next_line.h", O_RDONLY);
    char *str ="";
    int i;
    
    while (str)
    {
        str = get_next_line(fd);
        printf("%s",str);
        free(str);
    }
    system("leaks a.out");
    return 0;
}