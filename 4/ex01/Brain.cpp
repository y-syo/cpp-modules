/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:44:13 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/19 05:58:27 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::Brain(Brain &copy)
{
	for (int i = 0; i < MAX_IDEA; i++)
	  this->ideas[i] = copy.ideas[i];
}

Brain::~Brain(void)
{
}

Brain	&Brain::operator=(const Brain &other)
{
	for (int i = 0; i < MAX_IDEA; i++)
	  this->ideas[i] = other.ideas[i];
	return (*this);
}

void	Brain::setIdea(size_t n, std::string idea)
{
	  if (n < MAX_IDEA)
		this->ideas[n] = idea;
}

void	Brain::showIdea(void) const
{
	  for (int i = 0; i < MAX_IDEA; i++)
		if (!this->ideas[i].empty())
			std::cout << i << ": " << this->ideas[i] << std::endl;
}
