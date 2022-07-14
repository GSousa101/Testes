#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);

int main()
 {
    int		fd;
	char	*str;
	int		i;

	fd = open("odisseia.txt", O_RDONLY);
	i = 0;
	while (i++ < 12)
	{
		str = get_next_line(fd);   	
    	printf("%s", str);
		free(str);
	}
	close(fd);
    return (0);
 }
 
