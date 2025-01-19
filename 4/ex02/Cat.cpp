/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/19 07:00:41 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("cat")
{
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	delete this->_brain;
}

Cat::Cat(Cat &copy): Animal("cat")
{
	this->_brain = new Brain();
	this->_brain = copy._brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	this->_brain = other._brain;
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
