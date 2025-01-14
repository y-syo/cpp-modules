/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:42:47 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/14 05:36:48 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

#define RESET	"\033[0m"
#define DIM		"\033[2m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define YELLOW	"\033[1;33m"
#define BLUE	"\033[1;34m"
#define PURPLE	"\033[1;35m"

class ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hp, int ep, int ap, std::string color);
	ClapTrap(const ClapTrap &other);
	ClapTrap(const ClapTrap &other, std::string color);
	~ClapTrap(void);
	ClapTrap	&operator=(const ClapTrap &other);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_points;
	std::string _color;

};
