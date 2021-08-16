#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int get_next_line(char **line)
{
	int		i = 0;
	int		rd;
	char	ch;

	char	*buffer = malloc(100000);
	*line = buffer;
	while ((rd = read(0, &ch, 1)) > 0 && ch != '\n')
		buffer[i++] = ch;
	buffer[i] = '\0';
	return(rd); //1 0 -1
}

int	main(void)
{
	char	*line;
	int		fd;

	line = NULL;

	while((fd = get_next_line(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
}