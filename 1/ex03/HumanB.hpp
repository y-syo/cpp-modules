/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:01:56 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/27 15:15:08 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	~HumanB(void);

	void	setWeapon(Weapon weapon);
	void	attack(void);

private:
	Weapon		*weapon;
	std::string	name;

};

#endif
