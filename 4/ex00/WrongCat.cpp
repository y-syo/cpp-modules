/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 12:14:16 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("cat")
{
	std::cout << "wrong cat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy): WrongAnimal("cat")
{
	(void) copy;
	std::cout << "wrong cat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "wrong cat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meow meoooow :3 (but wrong)" << std::endl;
}
