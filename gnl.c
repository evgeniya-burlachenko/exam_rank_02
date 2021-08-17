#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int get_next_line(char **line)
{
	char rd;
	char c;
	int i = 0;

	char *buf = malloc(10000);
	*line = buf;

	while( (rd = read(0, &c, 1)) > 0 && c != '\n')
		buf[i++] = c;
		buf[i] = '\0';
	return(rd);

}

int main(void)
{
	char *line;
	char fd;

	while((fd = get_next_line(&line)) > 0)
		printf("%s\n", line);
		free(line);
}