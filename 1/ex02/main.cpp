/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:18:06 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/25 14:28:46 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "str memory address : 0x" << &str << std::endl;
	std::cout << "ptr memory address : 0x" << &ptr << std::endl;
	std::cout << "ref memory address : 0x" << &ref << std::endl;


	std::cout << "str value : " << str << std::endl;
	std::cout << "ptr value : " << *ptr << std::endl;
	std::cout << "ref value : " << ref << std::endl;
}
