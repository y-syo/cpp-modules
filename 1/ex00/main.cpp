/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:22:28 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/24 19:25:40 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z1 = newZombie("kakoh");
	Zombie	*z2 = newZombie("caca en personne");
	randomChump("evilge");
	z1->announce();
	delete z1;
	z2->announce();
	delete z2;
}
