/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:18:12 by mmoussou          #+#    #+#             */
/*   Updated: 2024/12/13 20:29:02 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int ac = 1; ac < argc; ac++)
	{
		str.assign(argv[ac]);

		for (std::string::iterator it=str.begin(); it != str.end(); ++it)
			std::cout << (char)std::toupper(*it);
	}
	std::cout << std::endl;
	return (0);
}
