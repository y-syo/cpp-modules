/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 04:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/16 15:49:40 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("SC4V-TP", 100, 100, 30, BLUE)
{
	std::cout << BLUE << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30, BLUE)
{
	std::cout << BLUE << "named FragTrap constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other, BLUE)
{
    *this = other;
	std::cout << BLUE << "FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << DIM << "FragTrap destructor called" << RESET << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (!_hit_points)
	{
		std::cout << DIM << this->_name << " is dead, can't high five sorry." << RESET << std::endl;
		return ;
	}

	if (!_energy_points)
	{
		std::cout << DIM << this->_name << " don't have any energy left sorry guys." << RESET << std::endl;
		return ;
	}

	std::cout << this->_color << this->_name << " : high fives teammates !" << RESET << std::endl;
}
