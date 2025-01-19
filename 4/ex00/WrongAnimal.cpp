/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:15:25 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/17 12:29:58 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Random Animal")
{
}

WrongAnimal::WrongAnimal(std::string args_type): type(args_type)
{
}

WrongAnimal::~WrongAnimal(void)
{
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
	std::cout << "hello i am an animal and i am making a sound" << std::endl;
}
