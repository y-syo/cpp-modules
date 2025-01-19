/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:25:16 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/19 07:03:07 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
public:
	Cat(void);
	Cat(Cat &copy);
	~Cat(void);

	Cat		&operator=(const Cat &other);
	
	void	makeSound(void) const;
	Brain	*getBrain(void) const;

private:
	Brain	*_brain;

};

#endif
