/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:31:51 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/25 14:41:22 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	void		setType(std::string type);
	std::string	getType(void);

private:
	std::string	type;

};

#endif
