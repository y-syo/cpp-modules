/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:37:14 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/17 17:11:47 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
public:
	Animal(void);
	Animal(Animal &other);
	virtual ~Animal(void);

	Animal				&operator=(const Animal &other);

	virtual void		makeSound(void) const;
	const std::string	&getType(void) const;

protected:
	Animal(std::string args_type);
	std::string	type;

};

#endif
