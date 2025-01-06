/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:22:28 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/06 14:30:21 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z = zombieHorde(25, "zombie army");
	for (int i = 0; i < 25; i++)
	{
		z[i].announce();
	}
	delete []z;
}
