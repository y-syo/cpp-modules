/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 11:58:24 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("dog")
{
	std::cout << "dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "dog is barking" << std::endl;
}
