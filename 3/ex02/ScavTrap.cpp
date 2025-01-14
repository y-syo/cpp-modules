/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 04:28:58 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/14 06:02:12 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("SC4V-TP", 100, 50, 20, PURPLE)
{
	this->_guarding = false;
	std::cout << PURPLE << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20, PURPLE)
{
	this->_guarding = false;
	std::cout << PURPLE << "named ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other, PURPLE)
{
    *this = other;
	std::cout << PURPLE << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << PURPLE << "ScavTrap destructor called" << RESET << std::endl;
}



void	ScavTrap::attack(const std::string &target)
{
	if (!_hit_points)
	{
		std::cout << DIM << this->_name << " is dead, can't attack." << RESET << std::endl;
		return ;
	}

	if (!_energy_points)
	{
		std::cout << DIM << this->_name << " don't have any energy left to attack." << RESET << std::endl;
		return ;
	}

	std::string	attack_sentence[5] = { "Step right up, to the Bulletnator 9000!", "I am a tornado of death and bullets!", "That looks like it hurts!", "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!", "Ha ha ha! Fall before your robot overlord!" };

	this->_energy_points--;
	std::cout << DIM << this->_name << " attacks " << target << " doing " << this->_attack_points << " points of damage."<< RESET << std::endl;
	std::cout << this->_color << this->_name << ": " << attack_sentence[std::rand() % 5] << RESET << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (!_hit_points)
	{
		std::cout << DIM << this->_name << " is dead, can't guard." << RESET << std::endl;
		return ;
	}

	if (!_energy_points)
	{
		std::cout << DIM << this->_name << " don't have any energy left to guard." << RESET << std::endl;
		return ;
	}

	if (!this->_guarding)
		std::cout << this->_color << this->_name << " is now in guard mode." << RESET << std::endl;
	else
		std::cout << this->_color << this->_name << " is not in guard mode anymore." << RESET << std::endl;
	this->_guarding = !this->_guarding;
}
