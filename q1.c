#include <stdio.h>

void	questao1(int numero)
{
	int	i;
	int	k;
	int	j;

	if (numero == 1)
	{
		printf("*\n");
	}
	i = 0;
	while (i < numero)
	{
		k = numero - i - 2;
		while (k >= 0)
		{
			printf(" ");
			k--;
		}
		j = 0;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}

int	main(void)
{
	int	i = 10;

	questao1(i);
	return (0);
}
