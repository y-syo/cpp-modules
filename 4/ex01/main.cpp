/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:46:50 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 12:28:27 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMALS_NUMBER 10

int main(void)
{
	{
		std::cout << "------ constructors ------" << std::endl;
		Animal *arr[ANIMALS_NUMBER];

		for (int i = 0; i < (ANIMALS_NUMBER / 2); i++)
			arr[i] = new Cat();

		for (int i = ANIMALS_NUMBER / 2; i < ANIMALS_NUMBER; i++)
			arr[i] = new Dog();
		
		std::cout << std::endl << "------ making sound ------" << std::endl;
		for (int i = 0; i < ANIMALS_NUMBER; i++)
			arr[i]->makeSound();

		if (ANIMALS_NUMBER < 100)
		{
			std::cout << std::endl << "------ brains test ------" << std::endl;
			for (int i = 0; i < ANIMALS_NUMBER; i++)
			{
				if (arr[i]->getType() == "cat")
				{
					((Cat *) arr[i])->getBrain()->setIdea(i, "this is a test idea");
					((Cat *) arr[i])->getBrain()->showIdea();
				}
				else if (arr[i]->getType() == "dog")
				{
					((Dog *) arr[i])->getBrain()->setIdea(i, "this is an other test idea");
					((Dog *) arr[i])->getBrain()->showIdea();
				}
			}
		}

		std::cout << std::endl << "------ destructors ------" << std::endl;

		for (int i = 0; i < ANIMALS_NUMBER; i++)
			delete arr[i];
	}

	Dog basic;

	{

	Dog tmp;

		tmp = basic;

	}

	return 0;
}
