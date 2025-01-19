/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/19 07:01:18 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("dog")
{
	this->_brain = new Brain();
}

Dog::~Dog(void)
{
	delete this->_brain;
}

Dog::Dog(Dog &copy): Animal("cat")
{
	this->_brain = new Brain();
	this->_brain = copy._brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	this->_brain = other._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "i am a dog named daisy and i have not eaten alive a family of 4 this morning" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}
