/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:46:50 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/17 12:28:04 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << meta->getType() << std::endl;
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		
		meta->makeSound();
		j->makeSound();
		i->makeSound();

		delete meta;
		delete j;
		delete i;
	}

	{
		const WrongAnimal *wanimal = new WrongAnimal();
		const WrongAnimal *wcat = new WrongCat();
		
		std::cout << wanimal->getType() << std::endl;
		std::cout << wcat->getType() << std::endl;
		
		wanimal->makeSound();
		wcat->makeSound();
		
		delete wanimal;
		delete wcat;

	}


	return 0;
}
