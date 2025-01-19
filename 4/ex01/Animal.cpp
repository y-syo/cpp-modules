/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:15:25 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/19 06:38:11 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Random Animal")
{
}

Animal::Animal(Animal &other): type(other.type)
{
}

Animal::Animal(std::string args_type): type(args_type)
{
}

Animal::~Animal(void)
{
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
	std::cout << "hello i am an animal and i am making a sound" << std::endl;
}
