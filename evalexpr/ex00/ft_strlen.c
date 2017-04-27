# include <stdio.h>
# include <string.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		main(void)
{
	char s1[] = "aaaa 0aaaaa";

	int x = strlen(s1);
	printf("%d\n", x);

	char s3[] = "aaaa 0aaaaa";

	int y = ft_strlen(s3);
	printf("%d\n", y);

	return (0);
}
