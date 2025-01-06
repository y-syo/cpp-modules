/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:18:56 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/06 14:28:07 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N < 1)
		return (NULL);
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].SetName(name);
	}
	return (horde);
}
