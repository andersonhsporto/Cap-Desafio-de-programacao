#include <stdio.h>
#include <string.h>

void	check_senha(char *senha)
{
	size_t	size;

	size = 6;
	if (strlen(senha) < 6)
	{
		printf("%d\n", size - strlen(senha));
	}
	else
	{
		printf("Tamanho da senha correto (%d) \n", strlen(senha));
	}
}

int	main(void)
{
	char	*senha;

	senha = "Ya3";
	check_senha(senha);
	return (0);
}
