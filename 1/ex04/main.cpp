/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:10:07 by mmoussou          #+#    #+#             */
/*   Updated: 2024/11/13 18:33:19 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	input_file;
	std::ofstream	output_file;
	std::string		content;
	char			c;

	if (argc != 4)
		return (-1);
	input_file.open(argv[1]);
	if (input_file.fail())
	{
		std::cout << "error: can't open given file" << std::endl;
		return (-1);
	}

	while (!input_file.eof())
	{
		input_file >> std::noskipws >> c;
		content += c;
	}
	input_file.close();

	std::string name;
	name += argv[1];
	name += ".replace";
	output_file.open(name.c_str());
	if (output_file.fail())
	{
		std::cout << "error: can't open target file" << std::endl;
		return (-1);
	}

	for (int i = 0; i < (int)content.size(); i++)
	{
		if ((int)(content.find(argv[2], i)) == i)
		{
			output_file << argv[3];
			i += std::string(argv[2]).size();
		}
		output_file << content[i];
	}
	output_file.close();
}
