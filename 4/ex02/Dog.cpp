/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 12:05:18 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("dog")
{
	std::cout << "dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "dog destructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog &copy): Animal("dog")
{
	std::cout << "dog copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Dog	&Dog::operator=(const Dog &other)
{
	*this->_brain = *other._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "dog is barking" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}
