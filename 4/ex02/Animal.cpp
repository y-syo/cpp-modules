/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:15:25 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 12:06:11 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Random Animal")
{
	std::cout << "animal constructor called" << std::endl;
}

Animal::Animal(Animal &other): type(other.type)
{
	std::cout << "animal copy constructor called" << std::endl;
}

Animal::Animal(std::string args_type): type(args_type)
{
	std::cout << "animal constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "animal destructor called" << std::endl;
}

Animal		&Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}

void		Animal::makeSound(void) const
{
	std::cout << "animal is making sound" << std::endl;
}
