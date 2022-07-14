#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "get_next_line_bonus.h"

int main()
 {
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("sonic.txt", O_RDONLY);
	fd2 = open("odisseia.txt", O_RDONLY);
	fd3 = open("teste1.txt", O_RDONLY);
	i = 0;
	while (i++ < 3)
	{
		str1 = get_next_line(fd1);  	
		str2 = get_next_line(fd2);  	
		str3 = get_next_line(fd3);  	
		str4 = get_next_line(10000)
    	printf("%s\n", str2);
    	printf("%s\n", str2);
    	printf("%s\n", str3);
    	printf("%s\n", str4);
		free(str1);
		free(str2);
		free(str3);
		free(str4);
	}
	close(fd1);
	close(fd2);
	close(fd3);
     return (0);
 }
 
