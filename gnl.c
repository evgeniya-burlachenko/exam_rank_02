#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int get_next_line(char **line)
{
	int		i;
	int		rd;
	char	ch;

	i = 0;
	char	*buffer = malloc(100000);
	*line = buffer;
	while ((rd = read(0, &ch, 1)) > 0 && ch != '\n')
		buffer[i++] = ch;
	buffer[i] = '\0';
	return(rd);
}

	int	main(void)
{
	char	*line;

	while(1)
	{
		get_next_line(&line);
	printf("%s\n", line);
	}

}