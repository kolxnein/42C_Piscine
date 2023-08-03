#include <unistd.h>

int	main(int argc, char **av)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{	
				av[1][i] += 32;
				write(1, &av[1][i], 1);
			}
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] -= 32;
				write(1, &av[1][i], 1);
			}
			else	
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
