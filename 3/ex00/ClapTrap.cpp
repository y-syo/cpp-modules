/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:55:50 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/14 05:28:31 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define RESET	"\033[0m"
#define DIM		"\033[2m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define YELLOW	"\033[1;33m"
#define BLUE	"\033[1;34m"
#define PURPLE	"\033[1;35m"

void	set_seed(void)
{
	static bool is_set = false;
	if (!is_set)
	{
	std::srand(std::time(0));
		is_set = true;
	}
}

ClapTrap::ClapTrap(void): _name("CL4P-TP"), _hit_points(10), _energy_points(10), _attack_points(0)
{
	set_seed();
	std::string welcome_sentence[5] = { "You want me? To join you? I am SO excited. We will be best friends.", "My programmer always said two hands are better then one. But then he only gave me one. I wonder why?", "I wanna come, can I come? I promise I won't get in the way. Please?", "Battlebot go -- Oh that's me", "Did somebody call the Lovebot? No, oh well I'm here anyways" };

	std::cout << GREEN << this->_name << ": " << welcome_sentence[std::rand() % 5] << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_points(0)
{
	set_seed();
	std::string welcome_sentence[5] = { "You want me? To join you? I am SO excited. We will be best friends.", "My programmer always said two hands are better then one. But then he only gave me one. I wonder why?", "I wanna come, can I come? I promise I won't get in the way. Please?", "Battlebot go -- Oh that's me", "Did somebody call the Lovebot? No, oh well I'm here anyways" };

	std::cout << GREEN << this->_name << ": " << welcome_sentence[std::rand() % 5] << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _hit_points(10), _energy_points(10), _attack_points(0)
{
	set_seed();
	std::string welcome_sentence[5] = { "You want me? To join you? I am SO excited. We will be best friends.", "My programmer always said two hands are better then one. But then he only gave me one. I wonder why?", "I wanna come, can I come? I promise I won't get in the way. Please?", "Battlebot go -- Oh that's me", "Did somebody call the Lovebot? No, oh well I'm here anyways" };

	std::cout << GREEN << this->_name << ": " << welcome_sentence[std::rand() % 5] << RESET << std::endl;
}

ClapTrap::~ClapTrap(void)
{
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_points = other._attack_points;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
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
	std::cout << BLUE << this->_name << ": " << attack_sentence[std::rand() % 5] << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hit_points)
		return ;
	
	this->_hit_points -= amount;

	std::string	hit_sentence[5] = { "Aww, that was my favorite eye!", "Why do I feel pain?!", "My friend, you just activated my revenge subroutines!", "Okay, now I'm mad!", "Ow! My servos!" };

	std::cout << DIM << this->_name << " took " << amount << " damages" << RESET << std::endl;
	std::cout << YELLOW << this->_name << ": " << hit_sentence[std::rand() % 5] << RESET << std::endl;
	if ((unsigned int)(this->_hit_points) << 31)
		this->_hit_points = 0;

	if (!_hit_points)
	{
		std::string goodbye_sentence[5] = { "NOOO!", "I'll die the way I lived: annoying!", "No fair! I wasn't ready.", "Argh arghargh death gurgle gurglegurgle urgh... death.", "Crap happens." };

		std::cout << DIM << this->_name << " is dead." << RESET << std::endl;
		std::cout << RED << this->_name << ": " << goodbye_sentence[std::rand() % 5] << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hit_points)
	{
		std::cout << DIM << this->_name << " is dead, can't repair." << RESET << std::endl;
		return ;
	}

	if (!_energy_points)
	{
		std::cout << DIM << this->_name << " don't have any energy left to repair." << RESET << std::endl;
		return ;
	}

	this->_energy_points--;
	this->_hit_points += amount;
	std::cout << DIM << this->_name << " got repaired, now at " << this->_hit_points << " hit points." << RESET << std::endl;
	std::cout << PURPLE << this->_name << ": " << "Good as new, I think. Am I leaking?" << RESET << std::endl;
}
