#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int ac = 1; ac < argc; ac++)
		{
			for (int i = 0; argv[ac][i]; i++)
				argv[ac][i] = std::toupper(argv[ac][i]);
			std::cout << argv[ac];
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
