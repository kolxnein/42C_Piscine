#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	if (copy == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
	}
	copy[i] = '\0';
	return (copy);
}
