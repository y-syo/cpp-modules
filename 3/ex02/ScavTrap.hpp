/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:05:38 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/14 05:26:14 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public:
	ScavTrap(void);
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &);
	~ScavTrap(void);

	void	attack(const std::string &target);
	void	guardGate(void);

private:
	bool _guarding;

};
