#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		find_median(int argc, char **argv);
int		matrix_isdigit(int argc, char **argv);
int		ft_isdigit(int c);
void	ft_sort_int_tab(int *tab, int size);

int		main(int argc, char **argv)
{
	int median;

	median = find_median(argc, argv);
	printf("%d\n", median);
	return (0);
}

int	     find_median(int argc, char **argv)
{
	int	*temp;
	int median;
	int	index;

	if (matrix_isdigit(argc, argv) == 0)
	{
		printf("Insira somente números! \n");
		return (0);
	}
	if (argc % 2 != 0)
	{
		printf("Insira um número ímpar de elementos\n");
		return(0);
	}
	temp = (int *)malloc(sizeof(int) * argc - 1);
	index = 0;
	while (index < argc - 1)
	{
		temp[index] = atoi(argv[index + 1]);
		index++;
	}
	ft_sort_int_tab(temp, argc - 1);
	median = temp[index / 2];
	free(temp);
	return (median);
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	comp;
	int	temp;

	count = 0;
	while (count < size)
	{
		comp = count + 1;
		while (comp < size)
		{
			if (tab[count] > tab[comp])
			{
				temp = tab[count];
				tab[count] = tab[comp];
				tab[comp] = temp;
			}
			comp++;
		}
		count++;
	}
}
