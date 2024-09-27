/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:27:38 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/24 19:26:06 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);

private:
	std::string	name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
