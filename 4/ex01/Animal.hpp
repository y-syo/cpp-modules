/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:37:14 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/19 07:02:25 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
public:
	virtual ~Animal(void);

	Animal				&operator=(const Animal &other);

	virtual void		makeSound(void) const;
	const std::string	&getType(void) const;

protected:
	std::string	type;

	Animal(void);
	Animal(Animal &other);
	Animal(std::string args_type);

};

#endif
