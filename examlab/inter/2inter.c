#include <unistd.h>







int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{	
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				write(1, &argv[2][j], 1);
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
