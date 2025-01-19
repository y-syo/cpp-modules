/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:01:17 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/19 05:49:04 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

#define MAX_IDEA 100

class Brain {
public:
	Brain(void);
	Brain(Brain &copy);
	~Brain(void);
	Brain	&operator=(const Brain &other);

	void	setIdea(size_t n, std::string idea);
	void	showIdea(void) const;

private:
	std::string	ideas[100];

};

#endif
