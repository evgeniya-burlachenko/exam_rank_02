#include <unistd.h>

int		ft_union(char *str, char c, int len)
{
	int	i;

	i = 0;
	while(str[i] && i < len)
		if (str[i++] == c)
			return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
			while(argv[1][i])
			{
				if (ft_union(argv[1], argv[1][i], i)) //если нет повтора с соседним символом - ft_union -> retutn(1)
					write(1, &argv[1][i], 1);// печатаю напр ccvnm cc -  повтор -> cv - нет повтора печатаю c -> vn нет повтора печатаю v etc..
			i++;
			}
		j = 0;
			while(argv[2][j])
			{
				if(ft_union(argv[1], argv[2][j], i) && ft_union(argv[2], argv[2][j], j))// есть ли повтор 1 ой стр со 2ой и во 2ой 
					write(1, &argv[2][j], 1);
				j++;
			}	
	}	
	write(1, "\n", 1);
	return (0);
}