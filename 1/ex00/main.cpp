/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:22:28 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/06 14:27:30 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z1 = newZombie("foo");
	Zombie	*z2 = newZombie("lorem ipsum");
	randomChump("random zombie");
	z1->announce();
	delete z1;
	z2->announce();
	delete z2;
}
