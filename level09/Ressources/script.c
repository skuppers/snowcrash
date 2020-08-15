#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

#define CHARACTERS 25

int main(int ac, char **argv)
{
        int     i;
        int     fd;
        char    *buff;

        if (ac < 2)
                return 0;
        fd = open(argv[1], O_RDONLY);
        buff = (char *)malloc(sizeof(char) * CHARACTERS);
        read(fd, buff, CHARACTERS);
        for  (int i = 0; i < CHARACTERS; i++)
                printf("%c", buff[i] - i);
        printf("\n");
        return 0;
}
