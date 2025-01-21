/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 10:51:07 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("cat")
{
	std::cout << "cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "meow meoooow :3" << std::endl;
}
