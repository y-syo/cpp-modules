/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:46:50 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 11:18:32 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMALS_NUMBER 2

int main(void)
{
	{
		Animal test();
		Animal *test2 = new Animal();
	}

	{
		Animal *arr[ANIMALS_NUMBER];

		for (int i = 0; i < (ANIMALS_NUMBER / 2); i++)
			arr[i] = new Cat();

		for (int i = ANIMALS_NUMBER / 2; i < ANIMALS_NUMBER; i++)
			arr[i] = new Dog();

		for (int i = 0; i < ANIMALS_NUMBER; i++)
			arr[i]->makeSound();
		
		for (int i = 0; i < ANIMALS_NUMBER; i++)
			delete arr[i];
	}

	return 0;
}
