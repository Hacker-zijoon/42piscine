
char	*ft_case(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'A' && str[i] < 'M')
				str[i] += 13;
			else
				str[i] -= 13;
    }

    if (str[i] >= 'a' && str[i] <= 'z')
    		{
    	if (str[i] >= 'a' && str[i] < 'm')
    				str[i] += 13;
    		else
    				str[i] -= 13;
		    }
		i++;
	}
	return (str);
}

//
// char	*ft_rot42(char *str)
// {
// 	ft_case(str);
// 	return (str);
// }

#include <stdio.h>

int		main(void)
{

	char str[] = "abc";

  ft_case(str);
	printf("%s\n" , str);
	return (0);


  //
  // if (argc !=2)
  // {
  //   printf("\n");
  //   return(0);
  // }
  // char *str = ft_case(argv[1]);
  // printf("%s\n" , str);
}
