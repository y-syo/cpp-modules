/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:27:38 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/25 14:14:14 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void	SetName(std::string name);
	void	announce(void);

private:
	std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
