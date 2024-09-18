#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int ac = 1; ac < argc; ac++)
	{
		for (int i = 0; argv[ac][i]; i++)
			argv[ac][i] = std::toupper(argv[ac][i]);
	  std::cout << argv[ac];
	}
	std::cout << std::endl;
	return (0);
}
