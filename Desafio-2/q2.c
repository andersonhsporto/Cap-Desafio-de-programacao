#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int		find_pair(int argc, char **argv);
int		matrix_isdigit(int argc, char **argv);
int		ft_isdigit(int c);

int		main(int argc, char **argv)
{
	int pair;

	pair = find_pair(argc, argv);
	printf("%d\n", pair);
	return (0);
}

int	countpair(int *arr, int n, int k)
{
	int	count;

	count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] - arr[j] == k || arr[j] - arr[i] == k )
				count++;
		}
	}
	return (count);
}

int	     find_pair(int argc, char **argv)
{
	int	*temp;
	int pair;
	int	index;

	if (matrix_isdigit(argc, argv) == 0)
	{
		printf("Insira somente números! \n");
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * argc - 2);
	index = 0;
	while (index < argc - 2)
	{
		temp[index] = atoi(argv[index + 2]);
		index++;
	}
	pair = countpair(temp, argc - 2, atoi(argv[1]));
	free(temp);
	return (pair);
}


int	matrix_isdigit(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
