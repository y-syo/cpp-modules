/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:25:16 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 11:18:56 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
public:
	Dog(void);
	Dog(Dog &copy);
	~Dog(void);

	Dog		&operator=(const Dog &other);
	
	void	makeSound(void) const;
	Brain	*getBrain(void) const;

private:
	Brain	*_brain;

};

#endif
