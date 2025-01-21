/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:37:14 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/21 11:29:37 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal &other);
	virtual ~WrongAnimal(void);

	WrongAnimal			&operator=(const WrongAnimal &other);

	void				makeSound(void) const;
	const std::string	&getType(void) const;

protected:
	WrongAnimal(std::string args_type);
	std::string	type;

};

#endif
