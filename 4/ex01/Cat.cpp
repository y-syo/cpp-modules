/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 12:13:05 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("cat")
{
	std::cout << "cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "cat destructor called" << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat &copy): Animal("cat")
{
	std::cout << "cat copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Cat	&Cat::operator=(const Cat &other)
{
	*this->_brain = *other._brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow meoooow :3" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
