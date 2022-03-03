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

static size_t	check(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	size;

	s_len = strlen(s);
	size = 0;
	if (start > s_len)
	{
		size = 1;
	}
	else if (start + len > s_len)
	{
		size = s_len - start + 1;
	}
	else
	{
		size = len + 1;
	}
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (s == 0)
		return (0);
	substr = malloc((check(s, start, len)) * sizeof(char));
	i = 0;
	if (substr == 0)
		return (0);
	while ((len--) && (s[start + i] != '\0') && ((start + i) < strlen(s)))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	**start_matrix(char **argv)
{
	char	**matrix;

	char	*string = remove_spaces(argv);
	size_t	size = my_sqrt(strlen(string));
	matrix = malloc((strlen(string) / size) * sizeof(char *));
	int i, j;

	i = 0;
	j = 0;
	while (i < size + 1)
	{
		matrix[i] = ft_substr(string, j, size + 1);
		j +=size + 1;
		i++;
	}
	free(string);
	string = NULL;
	return (matrix);
}

int	matrix_len(char **matrix)
{
	int i = 0;
	while (matrix[i])
	{
		i++;
	}
	return(i);
}

char	replace_string(char *string, int size, int len)
{
	int		i = 0;
	int		j = 0;
	char	*tmp;


	while (i < size)
	{
		if (string[i] == '\0')
			string[i] = ' ';
		i++;
	}
	if (string[len] != ' ')
	{
		i = size;
		while (i > len)
		{
			string[i] = string[i - 1];
			i--;
		}
		string[len] = ' ';
	}
}


char	*encript(char **argv)
{
	char	**matrix = start_matrix(argv);
	char	*string = calloc(sizeof(char), strlen(argv[1]));
	int i = 0;
	int j = 0;
	int k = 0;
	while (j < strlen(argv[1]))
	{
		string[j] = matrix[i][k];
		i++;
		j++;
		if (i == matrix_len(matrix))
		{
			i = 0;
			k++;
		}
	}
	replace_string(string, strlen(argv[1]), matrix_len(matrix));
	return (string);
}


int		main(int argc, char **argv)
{
	char	*cript_string = encript(argv);

	printf("%s\n", cript_string);
	free(cript_string);
	return (0);
}
