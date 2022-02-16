#include <stdio.h>
#include <string.h>

int	check_anagram(char *string1, char *string2);

int	counter_anagram(char *string)
{
	char sub1[100] = {0};
	char sub2[100] = {0};
	int count = 0;
	int j;

	for (int len = 1; len < strlen(string); len++)
	{
		memset(sub1, 0, len);
		for (int i = 0; i < strlen(string) - len; i++)
		{
			strncpy(sub1, &string[i], len);
			memset(sub2, 0, len);
			j = i + 1;
			while (j < strlen(string) - len + 1)
			{
				strncpy(sub2, &string[j], len);
				if (check_anagram(sub1, sub2))
				{
					count++;
				}
				j++;
			}
		}
	}
	return (count);
}

int	check_anagram(char *string1, char *string2)
{
	int	primeiro[26] = {0};
	int	segundo[26] = {0};
	int	i;

	i = 0;
	while (string1[i] != '\0')
	{
		primeiro[string1[i] - 'a']++;
		i++;
	}
	i = 0;
	while (string2[i] != '\0')
	{
		segundo[string2[i] - 'a']++;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (primeiro[i] != segundo[i])
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char *string = "ifailuhkqq";
	int counter = counter_anagram(string);

	printf("%d \n", counter);
	return 0;
}
