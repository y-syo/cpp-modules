/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:15:25 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 11:46:24 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Random Animal")
{
	std::cout << "wrong animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other): type(other.type)
{
	std::cout << "wrong animal copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string args_type): type(args_type)
{
	std::cout << "wrong animal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "wrong animal destructor called" << std::endl;
}

WrongAnimal		&WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

const std::string	&WrongAnimal::getType(void) const
{
	return (this->type);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "wrong animal is making noise" << std::endl;
}
