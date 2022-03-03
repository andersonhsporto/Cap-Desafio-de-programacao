#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	my_sqrt(int number)
{
	size_t	i;

	i = 0;
	while (i * i <= (size_t)number)
	{
		if (i * i == (size_t)number)
		{
			return (i);
		}
		i++;
	}
	return (i - 1);
}

int	count_spaces(char *string)
{
	int	space;
	int index;

	space = 0;
	index = 0;
	while (string[index] !='\0')
	{
		if (string[index] == ' ')
			space++;
		index++;
	}
	return (space);
}

char	*remove_spaces(char **string)
{
	char	*tmp;
	int		spaces;
	int		i;
	int		j;

	tmp = (char *)malloc(sizeof(char *) * (strlen(string[1]) - spaces));
	spaces = count_spaces(string[1]);
	i = 0;
	j = 0;
	while (i < (strlen(string[1])))
	{
		if (string[1][i] != ' ')
		{
			tmp[j] = string[1][i];
			j++;
		}
		i++;
	}
	tmp[(strlen(string[1]) - spaces)] = '\0';
	return (tmp);
}

char	*matrix(char **argv)
{
	char	**matrix;
	char	*string = remove_spaces(argv);
	size_t	len = strlen(string);
	size_t	size = my_sqrt(len);
	matrix = malloc((len / size) * sizeof(char *));
	int i, j, k;

	j = 0;
	k = 0;
	while ((string[j] != '\0'))
	{
		matrix[k] = (char *)malloc(sizeof(char *) * size + 1);
		while (k < size)
		{
			i = 0;
			while (i < size)
			{
				matrix[k][i] = string[j];
				i++;
			}
			matrix[k][i] = '\0';
			k++;
		}
		j++;
	}
	return (NULL);
}


int		main(int argc, char **argv)
{
	char *teste = matrix(argv);

	free(teste);
	return (0);
}
