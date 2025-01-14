/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:05:38 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/14 05:58:36 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

public:
	FragTrap(void);
	FragTrap(std::string);
	FragTrap(const FragTrap &);
	~FragTrap(void);

	void	highFivesGuys(void);

};
