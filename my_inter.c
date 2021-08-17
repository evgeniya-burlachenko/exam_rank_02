#include <unistd.h>

int	inter(char *str, char c, int len)//строка симфол номер символа в строке
{
	int	i = 0; //новый счетчик строки

	while (str[i] && (i < len || len == -1)) //пока сушествует строка и 
		if (str[i++] == c)//если повтор 
			return (0);
	return (1); //если повторов нет в 1 строке и есть повтор со 2 ой 
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i]) //пока есть 1ая строка
		{
			if (inter(argv[1], argv[1][i], i) && !inter(argv[2], argv[1][i], -1)) // если нет повторов в 1 строке и есть повтор со второй строкой
				write(1, &argv[1][i], 1);//печатать общий символ
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}