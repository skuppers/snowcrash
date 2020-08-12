#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int ac, char **argv)
{
        int     i;
        int     fd;
        char    *buff;

        if (ac < 2)
                return 0;
        fd = open(argv[1], O_RDONLY);
        buff = (char *)malloc(sizeof(char) * 25);
        read(fd, buff, 25);
        for  (int i = 0; i < 25; i++)
                printf("%c", buff[i] - i);
        printf("\n");
        return 0;
}
